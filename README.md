# Threat Intelligence Correlation Engine

## Overview
Aggregates and correlates IOCs (Indicators of Compromise) with MITRE ATT&CK tactics, then indexes to Elasticsearch for dashboard visualization.

## Structure
- `engine/`: C++ logic to parse and correlate threat data
- `feeds/`: Sample MISP-style threat feeds
- `visualization/`: Python script to index results into Elasticsearch
- `config/`: Setup instructions

## Execution
1. Compile: `g++ engine/correlation_engine.cpp -o engine/correlation_engine`
2. Run Engine: `./engine/correlation_engine`
3. Index to Elasticsearch: `python visualization/es_indexing.py`

## Requirements
- C++17
- Elasticsearch
- Python 3.10+
🔧 Build Instructions
1. Install Dependencies

sudo apt-get install libcurl4-openssl-dev graphviz
2. Clone the Repo & Build

git clone https://github.com/rahulrn9/Threat-Intelligence-Correlation-Engine.git
cd Threat-Intelligence-Correlation-Engine
make
3. Run the Engine

./threatcorrelator data/misp_feed.json
4. Push to Elasticsearch (Optional)

python3 scripts/push_to_elastic.py
