# Threat Intelligence Correlation Engine Setup

1. Requires:
    - C++ compiler (g++, clang++)
    - Python 3.10+
    - Elasticsearch (7.x or 8.x)
    - `pip install elasticsearch`

2. Compile the C++ Engine:
```bash
g++ engine/correlation_engine.cpp -o engine/correlation_engine -std=c++17
```

3. Run the Engine:
```bash
./engine/correlation_engine
```

4. Index to Elasticsearch:
```bash
python visualization/es_indexing.py
```