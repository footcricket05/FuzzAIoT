import xml.etree.ElementTree as ET
import csv
import re

def parse_ddos_xml_to_csv(xml_file, csv_file, ddos_ips):
    tree = ET.parse(xml_file)
    root = tree.getroot()

    with open(csv_file, mode='w', newline='') as file:
        writer = csv.writer(file)
        writer.writerow(["Timestamp", "Source", "Destination", "PacketSize", "Label"])

        for packet in root.findall('.//p'):
            meta_info = packet.get('meta-info')
            if meta_info:
                # Extracting timestamp
                timestamp = packet.get('fbTx', '0')  # fallback to '0' if 'fbTx' not found

                # Extracting source and destination IP addresses
                ip_match = re.search(r'(\d+\.\d+\.\d+\.\d+) > (\d+\.\d+\.\d+\.\d+)', meta_info)
                if ip_match:
                    source_ip = ip_match.group(1)
                    destination_ip = ip_match.group(2)
                else:
                    continue  # skip this packet if IP addresses are not found

                # Extracting packet size
                size_match = re.search(r'length:\s+(\d+)', meta_info)
                packet_size = size_match.group(1) if size_match else '0'

                # Determine if the packet is part of an attack or benign traffic
                label = "DDoS" if any(source_ip.startswith(ip_prefix) for ip_prefix in ddos_ips) else "Unknown"

                # Writing to CSV
                writer.writerow([timestamp, source_ip, destination_ip, packet_size, label])

    print(f"DDoS traffic converted from XML to CSV at {csv_file}")

def main():
    # Path to the XML file generated by NS-3
    xml_file = r"C:\Users\Shaurya\Downloads\ns3-cybersecurity-simulations\1. NS3.31\ns-allinone-3.31\ns-3.31\DDoSTraffic.xml"
    
    # Output CSV file path
    csv_file = r"C:\Users\Shaurya\Downloads\FuzzAIoT\data\DDoSTraffic.csv"

    # Define the DDoS attack IP prefixes based on the simulation setup
    ddos_ips = ["10.1.0.", "10.1.1.", "10.1.2.", "10.1.3.", "10.1.4."]  # Prefixes for DDoS attack source IPs

    # Parse the XML file and convert to CSV
    parse_ddos_xml_to_csv(xml_file, csv_file, ddos_ips=ddos_ips)

if __name__ == "__main__":
    main()