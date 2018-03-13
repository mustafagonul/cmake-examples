cmake_minimum_required(VERSION 3.10.2)

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

## 3.10.2

# IS_64BIT	                = One if processor is 64Bit
cmake_host_system_information(RESULT is_64bit QUERY IS_64BIT)
message("Is 64bit:                   ${is_64bit}")

# HAS_FPU	                  = One if processor has floating point unit
cmake_host_system_information(RESULT has_fpu QUERY HAS_FPU)
message("Has FPU:                    ${has_fpu}")

# HAS_MMX	                  = One if processor supports MMX instructions
cmake_host_system_information(RESULT has_mmx QUERY HAS_MMX)
message("Has MMX:                    ${has_mmx}")

# HAS_MMX_PLUS	            = One if porcessor supports Ext. MMX instructions
cmake_host_system_information(RESULT has_mmx_plus QUERY HAS_MMX_PLUS)
message("Has MMX Plus:               ${has_mmx_plus}")

# HAS_SSE	                  = One if porcessor supports SSE instructions
cmake_host_system_information(RESULT has_sse QUERY HAS_SSE)
message("Has SSE:                    ${has_sse}")

# HAS_SSE2	                = One if porcessor supports SSE2 instructions
cmake_host_system_information(RESULT has_sse2 QUERY HAS_SSE2)
message("Has SSE2:                   ${has_sse2}")

# HAS_SSE_FP	              = One if porcessor supports SSE FP instructions
cmake_host_system_information(RESULT has_sse_fp QUERY HAS_SSE_FP)
message("Has SSE FP:                 ${has_sse_fp}")

# HAS_SSE_MMX	              = One if porcessor supports SSE MMX instructions
cmake_host_system_information(RESULT has_sse_mmx QUERY HAS_SSE_MMX)
message("Has SSE MMX:                ${has_sse_mmx}")

# HAS_AMD_3DNOW	            = One if porcessor supports 3DNow instructions
cmake_host_system_information(RESULT has_amd_3dnow QUERY HAS_AMD_3DNOW)
message("Has AMD 3DNOW:              ${has_amd_3dnow}")

# HAS_AMD_3DNOW_PLUS	      = One if porcessor supports 3DNow+ instructions
cmake_host_system_information(RESULT has_amd_3dnow_plus QUERY HAS_AMD_3DNOW_PLUS)
message("Has AMD 3DNOW Plus:         ${has_amd_3dnow_plus}")

# HAS_IA64	                = One if IA64 processor emulating x86
cmake_host_system_information(RESULT has_ia64 QUERY HAS_IA64)
message("Has IA64:                   ${has_ia64}")

# HAS_SERIAL_NUMBER	        = One if processor has serial number
cmake_host_system_information(RESULT has_serial_number QUERY HAS_SERIAL_NUMBER)
message("Has Serial Number:          ${has_serial_number}")

# PROCESSOR_SERIAL_NUMBER	  = Processor serial number
cmake_host_system_information(RESULT processor_serial_number QUERY PROCESSOR_SERIAL_NUMBER)
message("Processor Serial Number:    ${processor_serial_number}")

# PROCESSOR_NAME	          = Human readable processor name
cmake_host_system_information(RESULT processor_name QUERY PROCESSOR_NAME)
message("Processor Name:             ${processor_name}")

# PROCESSOR_DESCRIPTION	    = Human readable full processor description
cmake_host_system_information(RESULT processor_description QUERY PROCESSOR_DESCRIPTION)
message("Processor Description:      ${processor_description}")

# OS_NAME	                  = See CMAKE_HOST_SYSTEM_NAME
cmake_host_system_information(RESULT os_name QUERY OS_NAME)
message("OS Name:                    ${os_name}")

# OS_RELEASE	              = The OS sub-type e.g. on Windows Professional
cmake_host_system_information(RESULT os_release QUERY OS_RELEASE)
message("OS Release:                 ${os_release}")

# OS_VERSION	              = The OS build ID
cmake_host_system_information(RESULT os_version QUERY OS_VERSION)
message("OS Version:                 ${os_version}")

# OS_PLATFORM	              = See CMAKE_HOST_SYSTEM_PROCESSOR
cmake_host_system_information(RESULT os_platform QUERY OS_PLATFORM)
message("OS Platform:                ${os_platform}")

