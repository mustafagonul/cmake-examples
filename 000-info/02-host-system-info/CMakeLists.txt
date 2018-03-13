cmake_minimum_required(VERSION 3.10)

# cmake_host_system_information(RESULT <variable> QUERY <key> ...)

## 3.0.2

# NUMBER_OF_LOGICAL_CORES   = Number of logical cores.
cmake_host_system_information(RESULT number_of_logical_cores QUERY NUMBER_OF_LOGICAL_CORES)
message("Number of Logical Volumes:  ${number_of_logical_cores}")

# NUMBER_OF_PHYSICAL_CORES  = Number of physical cores.
cmake_host_system_information(RESULT number_of_physical_cores QUERY NUMBER_OF_PHYSICAL_CORES)
message("Number of pyhsical volumes: ${number_of_physical_cores}")

# HOSTNAME                  = Hostname.
cmake_host_system_information(RESULT hostname QUERY HOSTNAME)
message("Hostname:                   ${hostname}")

# FQDN                      = Fully qualified domain name.
cmake_host_system_information(RESULT fqdn QUERY FQDN)
message("FQDN:                       ${fqdn}")

# TOTAL_VIRTUAL_MEMORY      = Total virtual memory in megabytes.
cmake_host_system_information(RESULT total_virtual_memory QUERY TOTAL_VIRTUAL_MEMORY)
message("Total Virtual Memory:       ${total_virtual_memory}")

# AVAILABLE_VIRTUAL_MEMORY  = Available virtual memory in megabytes.
cmake_host_system_information(RESULT available_virtual_memory QUERY AVAILABLE_VIRTUAL_MEMORY)
message("Available Virtual Memory    ${available_virtual_memory}")

# TOTAL_PHYSICAL_MEMORY     = Total physical memory in megabytes.
cmake_host_system_information(RESULT total_physical_memory QUERY TOTAL_PHYSICAL_MEMORY)
message("Total Physical Memory:      ${total_physical_memory}")

# AVAILABLE_PHYSICAL_MEMORY = Available physical memory in megabytes.
cmake_host_system_information(RESULT available_physical_memory QUERY AVAILABLE_PHYSICAL_MEMORY)
message("Available Physical Memory:  ${available_physical_memory}")



