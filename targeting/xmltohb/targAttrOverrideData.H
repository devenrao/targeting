const AttributeData g_TargAttrs[] = {
	{
		"ATTR_ACTIVE_CORES_NUM",
		0x8ee5f82,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ACTIVE_CORES_VEC",
		0x7a4868d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ALG_TYPE_TO_ALG_TOKEN_CONTAINER",
		0xff69c2e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ALLOW_ATTR_OVERRIDES",
		0xf13ce5f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ALLOW_EEPROM_WRITES",
		0x59c3ee2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ALL_MCS_IN_INTERLEAVING_GROUP",
		0x06e992f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ALTFSI_MASTER_PORT",
		0x3d7757a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_APPLY_PCIE_WORKAROUND",
		0x1c4fb0a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ASYNC_NEST_FREQ_MHZ",
		0xc794239,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ATTN_AREA_1_ADDR",
		0x2b044eb,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ATTN_AREA_2_ADDR",
		0xf43c049,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_AUX_FUNC_INVOCATION_TIME_MS",
		0x467a7c6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_AVDD_ID",
		0xc710685,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_AVSBUS_BUSNUM",
		0x2914dff,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_AVSBUS_FREQUENCY",
		0xcc07b62,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_AVSBUS_RAIL",
		0xcc8bf2b,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_AVSBUS_VRM_FAIL_OVERRIDE",
		0x03622b1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_AW_STATIC_DATA_ENABLE",
		0x8fe7d97,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BACKING_CACHES_NUM",
		0x219cef7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BACKING_CACHES_VEC",
		0x66919bb,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BACKUP_MEASUREMENT_SEEPROM_SELECT",
		0xad366df,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BACKUP_SEEPROM_SELECT",
		0xb812834,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BASE_PVR",
		0x641e1d5,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BLOCK_SPEC_DECONFIG",
		0xf873da7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BMC_FRU_ID",
		0xe3947ec,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BOOT_FLAGS",
		0xc774921,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BOOT_FREQ_MHZ",
		0x61f8882,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BOOT_PAU_DPLL_BYPASS",
		0x36f90c5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BOOT_VOLTAGE",
		0x5c5498f,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_BOOT_VOLTAGE_BIAS_0P5PCT",
		0x4ec2278,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_BUS_POS",
		0x506af1e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C0_EXEC_HASCLOCKS",
		0x46cca69,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C0_HASPOWER",
		0x2010712,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C0_PC_HASCLOCKS",
		0xb639c30,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C1_EXEC_HASCLOCKS",
		0xcadc29f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C1_HASPOWER",
		0x5a8ea4b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_C1_PC_HASCLOCKS",
		0xae1e6c4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CDM_POLICIES",
		0x6f11c24,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CENTAUR_ECID_FRU_ID",
		0x957176b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_DQ_TO_DIMM_CONN_DQ",
		0xcd7817c,
		sizeof(uint8_t),
		{ 80, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_EFF_DIMM_SIZE",
		0x0e8df6e,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_CEN_MBA_DIMM",
		0x9553606,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MBA_PORT",
		0xacbf06c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_FREQ",
		0xe0cee5c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_FREQ_OVERRIDE",
		0x744b48b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_AVDD_MILLIVOLTS",
		0xad171df,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_AVDD_OFFSET_MILLIVOLTS",
		0xc976513,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VCS_MILLIVOLTS",
		0x32d84bd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VCS_OFFSET_MILLIVOLTS",
		0xb5913fd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VDDR_MILLIVOLTS",
		0xc73cd4e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VDDR_OFFSET_MILLIVOLTS",
		0x317b69f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VDD_MILLIVOLTS",
		0x19c712c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VDD_OFFSET_MILLIVOLTS",
		0xd55bf40,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VPP_MILLIVOLTS",
		0x2b00bff,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_MSS_VOLT_VPP_OFFSET_MILLIVOLTS",
		0xa6645a7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CEN_SPD_DRAM_DEVICE_TYPE",
		0xa8fffa4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIPLET_ID",
		0x2e5f49c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIP_CONTAINED_ACTIVE_CORES_VEC",
		0x852b409,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIP_CONTAINED_BACKING_CACHES_VEC",
		0xf466e86,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIP_FAN_CFM",
		0xf113798,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIP_ID",
		0x6d3696b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHIP_UNIT",
		0x9615865,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_CTRL_MARK",
		0x970ff46,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_CTRL_TRIG",
		0x16a3e9f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_DIS_WRAP",
		0xa22aac4,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_EN_D_PRE",
		0xa9e7355,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_EN_I_PRE",
		0xa4d2323,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_EVENT_SELECT",
		0x36b5355,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_EVENT_VTID",
		0x86695d0,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_FREEZE",
		0x2fcf5a5,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_IC_TAP",
		0x7584c35,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_IMA_EVENT_MASK_ONE_EVENT",
		0x5b7c99d,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_HTMSC_MODE_CORE_INSTR_STALL",
		0x6e2352a,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_CORE_CAPTURE_TRACE_FULL_ON_ERROR",
		0x2e0dedf,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_CORE_WRAP",
		0xcf85c28,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_DIS_GROUP",
		0x748298e,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_DIS_STALL",
		0xf5ac814,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_DIS_TSTAMP",
		0x5223195,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_LLAT_CAPTURE_FAIL_DISP_DIS",
		0x60af368,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_LLAT_CAPTURE_PBL3_HIT_DIS",
		0x9cedf5f,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_LLAT_CAPTURE_STORE_DIS",
		0x66c4d30,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_LLAT_IMBEDDED_TS",
		0x25ef505,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_LLAT_PAUSE_ON_PURGE",
		0x1e5007b,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_MARKERS_ONLY",
		0x7ec5eb9,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_SINGLE_TIME_STAMP",
		0xe9cec48,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_MODE_VGTARGET",
		0x0202831,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CHTM_TRACE_TYPE",
		0xa1e433c,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCKSTOP_ON_XSTOP",
		0xa26f1f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX0A_RCS_PLL_INPUT",
		0x18658a8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX0B_RCS_PLL_INPUT",
		0x55f05dc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX0C_RCS_PLL_INPUT",
		0xd94832a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX0D_RCS_PLL_INPUT",
		0x597acd8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX10_PAU_DPLL_INPUT",
		0xa45db0f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX11_NEST_DPLL_INPUT",
		0xac2958b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX12_OMI_LCPLL_INPUT",
		0x06065ab,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX13_OPT_133_SOURCE_INPUT",
		0x133d3ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX14_OPT_156_SOURCE_INPUT",
		0xed6a4b4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX1_INPUT",
		0xf1dc314,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX23_PCI_INPUT",
		0xf1e3ebe,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX2A_INPUT",
		0x69014fc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX2B_INPUT",
		0x4313fe7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX3_INPUT",
		0x010fb1f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX_IOHS_LCPLL_INPUT",
		0x4b21c2c,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_MUX_PCI_LCPLL_INPUT",
		0x280b074,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_PLL_MUX",
		0xb441dca,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CLOCK_PLL_MUX_TOD",
		0xc13aa28,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CME_CHTM_TRACE_ENABLE",
		0x2bfa1f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CME_CHTM_TRACE_MEMORY_CONFIG",
		0xa030cff,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CME_INSTRUCTION_TRACE_ENABLE",
		0xbe90420,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_COLLECT_ONLY_CLOCK_ON_DATA",
		0xfded6f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_COLLECT_SBE_SCRATCH_DATA",
		0x06b6027,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CONTAINED_IPL_TYPE",
		0x46189b8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CONTAINED_LOAD_PATH",
		0x32f9c30,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_HASCLOCKS",
		0xd66b345,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_HASPOWER",
		0x15f7d77,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_INSIDE_SPECIAL_WAKEUP",
		0xae5b915,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_IS_SPARE",
		0x9d575cb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_LPAR_MODE",
		0xd990683,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_LPAR_MODE_POLICY",
		0x3da9467,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_TEMP_CHECK_INTERVAL_SECONDS",
		0xf7f89d6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_THROTTLE_ASSERT_COUNT",
		0x211648c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CORE_THROTTLE_DEASSERT_COUNT",
		0x6167a77,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CPU_ATTR",
		0xd301294,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CP_PLLIOFLT_BYPASS",
		0xce4b78c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CP_PLLIOSSFLT_BYPASS",
		0x7d95979,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CP_PLLNESTFLT_BYPASS",
		0x73da768,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CP_PLLTODFLT_BYPASS",
		0x5ab3bbc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CP_REFCLOCK_SELECT",
		0x8e2c3d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CRITICAL_CORE_TEMP",
		0xc239aaf,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_CURRENT_SCALING_FACTOR",
		0x5f1a686,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_DATA_CACHE_LINE_SIZE",
		0xf4e0097,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DATA_CACHE_SIZE",
		0xd75007e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DCACHE_ASSOC_SETS",
		0x0bce06b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DCACHE_LINE_SIZE",
		0x9cb467b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DCADJ_BYPASS",
		0xc9cddc6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DCADJ_DCC_OVERRIDE",
		0x8a9711e,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DCADJ_TARGET_OVERRIDE",
		0x7b36ccf,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DD1_SLOW_PCI_REF_CLOCK",
		0xf4ac0bc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CA_ODT",
		0x7fe3065,
		sizeof(uint16_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CA_ODT_PER_DRAM",
		0x27a866f,
		sizeof(uint16_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CK_ODT",
		0xb0c96e5,
		sizeof(uint16_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CK_ODT_PER_DRAM",
		0xb20c6e2,
		sizeof(uint16_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CS_ODT",
		0x4447a44,
		sizeof(uint16_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_CS_ODT_PER_DRAM",
		0x1f722ba,
		sizeof(uint16_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_DQS_RTT_PARK",
		0xed4f5de,
		sizeof(uint8_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_DQS_RTT_PARK_PER_DRAM",
		0x18d5136,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_COUNT_MODE",
		0x58a1971,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_IN_SELF_REFRESH",
		0xc6d6b45,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_MODE",
		0x46304b2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_RESET_COUNTER",
		0x05c88c6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_SRANK_SELECT",
		0x05d46e3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_THRESHOLD_COUNT",
		0x85c31e5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_WRITEBACK",
		0xadddfcd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ECS_X4_WRITES",
		0x5eb10a7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLOFF_RD_NT",
		0xc60a499,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLOFF_WR",
		0x7b28a16,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLOFF_WR_NT",
		0x295e3af,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLON_RD_NT",
		0x263ef7e,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLON_WR",
		0x16e4587,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_ODTLON_WR_NT",
		0x949ac11,
		sizeof(int8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RD_POSTAMBLE",
		0x52f654c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RD_PREAMBLE",
		0x313a22a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RTT_NOM_RD",
		0xa42690f,
		sizeof(uint8_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RTT_NOM_WR",
		0x8dc9d7c,
		sizeof(uint8_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RTT_PARK",
		0x9c05f84,
		sizeof(uint8_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_RTT_WR",
		0x159dbfd,
		sizeof(uint8_t),
		{ 2, 4, 2, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_TEST_MODE",
		0x84f709a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_VREFCA",
		0xc18c43e,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_VREFCS",
		0x8ffa8f1,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_WR_POSTAMBLE",
		0x8dfd2fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_WR_PREAMBLE",
		0x58e0f72,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_DRAM_WR_VREFDQ",
		0x399d463,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_DDR5_EN_TX_DM_PREAMBLE_PATTERN",
		0xbe9c5f4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_EN_TX_DQ_PREAMBLE_PATTERN_U0",
		0x45769cb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_EN_TX_DQ_PREAMBLE_PATTERN_U1",
		0x1737151,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_TX_DM_PREAMBLE_PATTERN",
		0x2925ef3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_TX_DQ_PREAMBLE_PATTERN_U0",
		0x5cf9d4a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_TX_DQ_PREAMBLE_PATTERN_U1",
		0x483910a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDR5_VDN_UPLIFT_MV",
		0x0e57a47,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_BIAS_ENABLE",
		0xd2942c8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_COARSE_THROTTLE_ENABLE",
		0xa1f54ec,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_DELAY_ADJUST",
		0x6c81641,
		sizeof(int16_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_DPLL_FMAX_FAST_DISABLE",
		0x33a20f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_DPLL_FMIN_FAST_DISABLE",
		0xd5741a4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_DPLL_SLEW_MODE",
		0x05b494e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_DROOP_EXTREME_OVERRIDE",
		0x2412f59,
		sizeof(uint8_t),
		{ 9, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_ENABLED",
		0xe8a4ed4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_FMAX_OVERRIDE_KHZ",
		0x987bc15,
		sizeof(uint16_t),
		{ 9, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_FMIN_OVERRIDE_KHZ",
		0x2412cf9,
		sizeof(uint16_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_FREQ_JUMP_ENABLE",
		0x7aabf03,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_LARGE_DROOP_DETECT_ADJUST",
		0xb63ad57,
		sizeof(int8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_THRESHOLD_PSTATE_ENABLE",
		0x9ad35b5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_TRIP_INTERPOLATION_CONTROL",
		0x3310305,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_TRIP_MODE",
		0x724bc5c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DDS_TRIP_OFFSET_ADJUST",
		0xa5447c0,
		sizeof(int8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_DEAD_CORE_MODE",
		0xcb1fddb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DEALLOCATED",
		0xf79b949,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DEBUG_ODY_HRESET_CONTROL",
		0x6bae177,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DECONFIG_BUT_NOT_GARDED",
		0x6311ded,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DECONFIG_GARDABLE",
		0x59253de,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DEFAULT_FREQ_PB",
		0x925e5fc,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DEFAULT_FREQ_X",
		0x93430f7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DEFAULT_NEST_FREQ_MHZ",
		0x2659dd9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DIMM_POWER",
		0xf1df866,
		sizeof(uint32_t),
		{ 12, 1, 1, 1 } 
	},
	{
		"ATTR_DIMM_POWER_UTIL",
		0xce6f012,
		sizeof(uint8_t),
		{ 12, 1, 1, 1 } 
	},
	{
		"ATTR_DIMM_POWER_UTIL_INTERMEDIATE_POINTS",
		0x03744de,
		sizeof(uint8_t),
		{ 10, 1, 1, 1 } 
	},
	{
		"ATTR_DIMM_PREHEAT_POWER",
		0xed6c3e0,
		sizeof(uint32_t),
		{ 12, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_HBBL_VECTORS",
		0xb1c3653,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_PLD_WAIT",
		0x829cc6b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_PREDICTIVE_MEM_GUARD",
		0x6b72984,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_SBE_RUNTIME_RECOVERY",
		0xfd54264,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_SECURITY",
		0x945a086,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_SPECIAL_WAKEUP_ON_SYSTEM",
		0xa4f1b0b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DISABLE_TOD_SYNC_SPREAD",
		0x8f5a12c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DLR_AVERAGE_HISTORY_DEPTH_OVERRIDE",
		0xf3c3e44,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DLR_LINKS_ENABLED",
		0x0041f25,
		sizeof(uint16_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_DLR_PLSF_OVERRIDE",
		0x2716b4f,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_DLR_SAMPLE_TIME_MS",
		0x63546d5,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DRAMINIT_TRAINING_TIMEOUT",
		0xa140a0e,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DRAM_PD_DRV_IMP",
		0x70d1f95,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DRAM_PU_DRV_IMP",
		0x9a0cac6,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_DUMMY_HEAP_ZERO_DEFAULT",
		0x9184d62,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DUMMY_RO",
		0x7f95302,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DUMMY_RW",
		0x6b5b079,
		sizeof(uint8_t),
		{ 1, 3, 5, 1 } 
	},
	{
		"ATTR_DUMMY_WO",
		0x18849c5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DUMP_STOP_INFO_ENABLE_ERRORLOG",
		0x4221eb9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DUMP_STOP_INFO_SUPPRESS_ERROR_TRACE",
		0xc96a9e2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DVFS_ADJUSTMENT",
		0xa1ab2a1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DYNAMIC_INIT_FEATURE_COUNT",
		0xc3c0eb5,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DYNAMIC_INIT_FEATURE_VEC",
		0x0942635,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DYNAMIC_INIT_MODE_COUNT",
		0x57f72b2,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_DYNAMIC_INIT_MODE_VEC",
		0x218e65f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EC",
		0x3fd6b69,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ECID",
		0x522a158,
		sizeof(uint64_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_ECMD_TARGET",
		0xf46d814,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_ECO_MODE",
		0x4916096,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ECS_ERROR_COUNT_THRESHOLD",
		0x83950cf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EC_GARD",
		0x837f7ab,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EECACHE_DISABLE_AUTO_RESET",
		0x4a3e94f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EEPROM_VPD_ACTIVE_COPY",
		0xf578144,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EFFECTIVE_EC",
		0x8ff8d9c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DIMM_RANKS_CONFIGED",
		0x092ecab,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DIMM_SIZE",
		0xc1e40a4,
		sizeof(uint32_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DIMM_TYPE",
		0xe35b4c7,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_BANK_BITS",
		0x06d133f,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_BANK_GROUP_BITS",
		0x667433c,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_COLUMN_BITS",
		0x2f2f11c,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_DENSITY",
		0x07a9643,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_GEN",
		0x0d33633,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_MFG_ID",
		0x4bbfd53,
		sizeof(uint16_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_PPR",
		0x96494e2,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_RANK_MIX",
		0x55fe8eb,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_ROW_BITS",
		0x1c28c5e,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_SOFT_PPR",
		0x5534fbf,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TCCD_L",
		0x732fad3,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TFAW",
		0xaf91cc7,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TMAW",
		0x8196e7d,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRAS",
		0xa982f98,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRC",
		0x7461177,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRCD",
		0xc9b93c9,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRFC",
		0x878bcaf,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRP",
		0x8b78d35,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRRD_L",
		0x5ab71e7,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TRRD_S",
		0xd6045da,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TWR",
		0x05193dd,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TWTR_L",
		0x8cd1455,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_TWTR_S",
		0x440bec8,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_DRAM_WIDTH",
		0xbcc0968,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_HOSTBOOT_IMG_OFFSET",
		0x28068b9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EFF_HYBRID",
		0x43cb904,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_HYBRID_MEMORY_TYPE",
		0xa71dd22,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_NIBBLE_MAP",
		0x86feede,
		sizeof(uint8_t),
		{ 2, 2, 18, 1 } 
	},
	{
		"ATTR_EFF_NUM_MASTER_RANKS_PER_DIMM",
		0x0e715c8,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_NUM_RANKS_PER_DIMM",
		0x88ba0c5,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_PACKAGE_RANK_MAP",
		0x208baa7,
		sizeof(uint8_t),
		{ 2, 2, 18, 1 } 
	},
	{
		"ATTR_EFF_PRIM_STACK_TYPE",
		0x4934fda,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_RANK_GROUP_OVERRIDE",
		0x18d405f,
		sizeof(uint16_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_RCD_MFG_ID",
		0x43a0d7e,
		sizeof(uint16_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_REGISTER_REV",
		0x6cb15ee,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_EFF_REGISTER_TYPE",
		0x38313b7,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_ENABLED_THREADS",
		0xdf90286,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ENABLE_ABIST",
		0x10e6b93,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ENABLE_CORE_TEMP_CHECK",
		0x7a3283c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ENABLE_FIR_UNMASKING",
		0x39e6bbf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ENABLE_LBIST",
		0x7515d41,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EQ_INSIDE_SPECIAL_WAKEUP",
		0xcb7b544,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXECUTION_PLATFORM",
		0x6134e50,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ACTAG_BASE",
		0x9a283f7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_AFU_ACTAG_LEN",
		0xe6f5561,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ENABLE_US_TMPL_1",
		0x73cc90f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ENABLE_US_TMPL_5",
		0x1865b64,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ENABLE_US_TMPL_9",
		0x50892df,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ENABLE_US_TMPL_A",
		0x8063772,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_ENABLE_US_TMPL_B",
		0x0025f83,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_METADATA_ENABLE",
		0x47688d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_PASID_BASE",
		0x515fe7b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_PASID_LEN",
		0xd3a4b37,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_SHRT_BACKOFF_TIMER",
		0x1d2e7e8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_TMPL_0_PACING",
		0x69ce066,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_TMPL_1_PACING",
		0xde60dc4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_TMPL_5_PACING",
		0x0fd5c68,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_TMPL_9_PACING",
		0x69fbe43,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXPLR_TMPL_B_PACING",
		0x19bf475,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_DATABUS_UTIL",
		0x1edce66,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_DIMM_THERMAL_LIMIT",
		0x3f2ddb0,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_MEM_PORT_POS_OF_FAIL_THROTTLE",
		0x7c84367,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0x97d528f,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_MEM_THROTTLED_N_COMMANDS_PER_SLOT",
		0x198c24a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_MEM_WATT_TARGET",
		0xddd3f7e,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_PORT_MAXPOWER",
		0x7606944,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_RUNTIME_MEM_M_DRAM_CLOCKS",
		0x2ab46d8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_RUNTIME_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0xda376c3,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_RUNTIME_MEM_THROTTLED_N_COMMANDS_PER_SLOT",
		0x0ad06df,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_SAFEMODE_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0x2dd7524,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_TOTAL_PWR_INTERCEPT",
		0xb50fc28,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EXP_TOTAL_PWR_SLOPE",
		0x071500e,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_EXTENDED_FREQ_MODE",
		0x26ecfec,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_EXTERNAL_VRM_STEPSIZE",
		0x1a091ba,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_EXTERNAL_VRM_TRANSITION_RATE_DEC_UV_PER_US",
		0x055981e,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_EXTERNAL_VRM_TRANSITION_RATE_INC_UV_PER_US",
		0x9dfa8e3,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_EXTERNAL_VRM_TRANSITION_STABILIZATION_TIME_NS",
		0x920e9b8,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_EXTERNAL_VRM_TRANSITION_START_NS",
		0xc8ab5a1,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_EX_INSIDE_SPECIAL_WAKEUP",
		0x2bf8757,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FABRIC_CHIP_ID",
		0x34eeb58,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FABRIC_GROUP_ID",
		0xdb4e40c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FABRIC_PRESENT_GROUPS",
		0x1871395,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FABRIC_TO_PHYSICAL_NODE_MAP",
		0x2d207b6,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_FAPI_POS",
		0x80817dc,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FCO_SUPPORTED",
		0x317b181,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FFO_FREQ_MHZ",
		0x401fdfd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FIELD_CORE_OVERRIDE",
		0xaff2273,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FIELD_TH_L2_LINE_DELETES",
		0x7469e45,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FIELD_TH_L3_LINE_DELETES",
		0xe5e057a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FILTER_PLL_BUCKET",
		0x0a745be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FORCE_DISABLE_SPECIAL_WAKEUP_ASSERTED",
		0x15c8113,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FORCE_ENABLE_SPECIAL_WAKEUP_ASSERTED",
		0x6b48c0f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FORCE_SBE_SCRATCH_DATA_COLLECTION",
		0x0dc047f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FORCE_SERIAL_ISTEPS",
		0x9d169d9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FORCE_SRAM_MMIO_OVER_I2C",
		0xeb2b814,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_A_MHZ",
		0x01204e8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_BIAS",
		0xe72dc05,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_BIAS_NOMINAL",
		0x1013c3d,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_BIAS_POWERSAVE",
		0xf99ae48,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_BIAS_TURBO",
		0xd6ece64,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_BIAS_ULTRATURBO",
		0x0271124,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_CORE_BOOT_MHZ",
		0x68dd522,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_CORE_CEILING_MHZ",
		0xa3dc291,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_CORE_FLOOR_MHZ",
		0x49b1d2e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_CORE_NOMINAL_MHZ",
		0xc1598bd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_CP_REFCLOCK_KHZ",
		0xcab73ca,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_DPLL_REFCLOCK_KHZ",
		0x47b7017,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_IOHS_LINK_MHZ",
		0xc37b3da,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_IOHS_MHZ",
		0xdafb56e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_IO_REFCLOCK_KHZ",
		0xbd6da05,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_MC_MHZ",
		0x02db547,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_OMI_MHZ",
		0xa6c0769,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_O_MHZ",
		0x59a4fc1,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PAU_MHZ",
		0x6f2adc3,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PAU_VPD_MHZ",
		0x968f7cc,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PB_MHZ",
		0x69e5db1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PB_MHZ_POUNDV_FALLBACK",
		0xaa1d410,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PCIE_MHZ",
		0x82f58e6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PROC_IOHS_MHZ",
		0xd6007fa,
		sizeof(uint32_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PROC_REFCLOCK",
		0xaac24d5,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_PROC_REFCLOCK_ACTUAL_KHZ",
		0x2591cf9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ",
		0x221fcbe,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_ORIGINAL",
		0xacca48f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_OVERRIDE",
		0xcc3d988,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ",
		0xdc82830,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ_ORIGINAL",
		0x3e38294,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ_OVERRIDE",
		0x0166494,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FREQ_X_MHZ",
		0x38a35a1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FRU_ID",
		0x278bc56,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSI_MASTER_PORT",
		0xf4637bc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSI_SLAVE_CASCADE",
		0x21c70fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_AVDD_I2C_ADDR",
		0x92ddf6e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_BAR_SIZE",
		0xd8dde00,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_BASE_ADDR",
		0xfcfe1a6,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_HW_RECONFIG_MAX_COUNT",
		0x9fd70fb,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_PM_SPWUP_OHA_FLAG",
		0x1db941d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_PROC_NEST_ABST_FAST_SETUP_LENGTH",
		0x5154cf0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_PROC_NEST_GPTR_FAST_SETUP_LENGTH",
		0x736309b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_SECURITY_MODE",
		0x6077b5a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VCS_I2C_ADDR",
		0xd82ca0c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VDDR_I2C_ADDR",
		0x326b38b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VDD_I2C_ADDR",
		0x9b2b581,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VDN_I2C_ADDR",
		0x95525f4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VIO_I2C_ADDR",
		0x992bab8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VMEM_I2C_ADDR",
		0x6ff404d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FSP_VPP_I2C_ADDR",
		0xdc91e7c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FUSED_CORE_MODE_HB",
		0xc7d9261,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FUSED_CORE_OPTION",
		0x9f670db,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_FUSED_CORE_PAIRED_MODE_ENABLED",
		0x8eda99e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HBRT_HYP_ID",
		0x891d6d1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_FALLBACK_CORES",
		0x5b6809b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_HRMOR_BYTES",
		0x29d3a9f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_HRMOR_NODAL_BASE",
		0x11a66f1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_HW_DECONFIG",
		0x65b4f2c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_MIN_BACKING_CACHE_FC",
		0xec67366,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_RSV_MEM_SIZE_MB",
		0xbf11ec0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_RUNNING",
		0xcd8f015,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HB_SETTINGS_OVERRIDE",
		0xe53583f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HCSI_CHIP_INTERFACE_PTR",
		0x47d4973,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HCSI_CHIP_SBE_INTERFACE_PTR",
		0x1e03c6f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HDAT_EC",
		0x9f10191,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HDAT_HBRT_NUM_SECTIONS",
		0xc6dfefe,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HDAT_HBRT_SECTION_SIZE",
		0xd0167e2,
		sizeof(uint64_t),
		{ 9, 1, 1, 1 } 
	},
	{
		"ATTR_HDAT_RSV_MEM_NUM_SECTIONS",
		0x997e20e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HDDW_ORDER",
		0x6a00c9c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOMER_LOCATION",
		0xed4417b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOMER_PHYS_ADDR",
		0xcac816f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOSTBOOT_HRMOR_OFFSET",
		0x347eff6,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOSTBOOT_TIME_OUT",
		0xf5f80be,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOSTSVC_PLID",
		0x0aa0ab1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOTPLUG",
		0xd8af594,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOTPLUG_MASK",
		0xea8022a,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HOT_PLUG_POWER_CONTROLLER_INFO",
		0x837b78a,
		sizeof(uint8_t),
		{ 8, 8, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CRESPFILT_INVERT",
		0xce3e5e5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_CHIP0_STOP",
		0xdf6bde0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_CHIP1_STOP",
		0x4a70af5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_DBG0_STOP",
		0x5464e01,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_DBG1_STOP",
		0x5add085,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_OTHER_DBG0_STOP",
		0xecc42ef,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_RUN_STOP",
		0xc352d05,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_CTRL_XSTOP_STOP",
		0x472b4fc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_ADDR_MASK",
		0xce7d97c,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_ADDR_PAT",
		0xb2b25f6,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_CRESP_MASK",
		0xe356be6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_CRESP_PAT",
		0xea5d545,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_OCC_MASK",
		0x92ff37a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_OCC_PAT",
		0x2754e20,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_PORT1_MASK",
		0x2dae314,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_PORT1_PAT",
		0xa235b8b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_PORT_MASK",
		0xe06e33e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_PORT_PAT",
		0xd754024,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_SCOPE_MASK",
		0x1d3faf3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_SCOPE_PAT",
		0xb84e7b5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_SOURCE_MASK",
		0x2c3dd0b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_SOURCE_PAT",
		0xe3b2a94,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_STOP_CYCLES",
		0xbd313d5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_STOP_ON_MATCH",
		0xd484fd1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_TTAG_MASK",
		0xd7a3f4c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_FILT_TTAG_PAT",
		0x712e3fe,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_IMA_PDBAR_ADDR",
		0x833d2c7,
		sizeof(uint64_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_IMA_PDBAR_SCOPE",
		0xe2556ce,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MEM_PRIORITY",
		0x51dd309,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MEM_SCOPE",
		0xfdbc8b2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_DIS_FORCE_GROUP_SCOPE",
		0xe3950d2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_DIS_TSTAMP",
		0x90059b3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_MARKERS_ONLY",
		0x5fa7892,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_SINGLE_TSTAMP",
		0x3d84c2e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_VGTARGET",
		0x46a1caf,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_MODE_WRAP",
		0x5390d2b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TSIZEFILT_MASK",
		0x172d7c5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TSIZEFILT_PAT",
		0xefc5783,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TTAGFILT_INVERT",
		0x47de4ea,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TTYPEFILT_INVERT",
		0x8b5ae6e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TTYPEFILT_MASK",
		0xf91795a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTMSC_TTYPEFILT_PAT",
		0xcde0848,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HTM_QUEUES",
		0x0ea4707,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_HUID",
		0xf9fde6a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HW543384_WAR_MODE",
		0xa450ad9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HW543822_WAR_MODE",
		0xb6ad76f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HWAS_STATE_CHANGED_FLAG",
		0x1c5c585,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HWAS_STATE_CHANGED_SUBSCRIPTION_MASK",
		0x4a76d45,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HW_DECONFIG",
		0xc3a80c1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_HW_RECONFIG_CURRENT_ITR",
		0x1bcdba6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_ADDRESS",
		0x8269cf5,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_BUS_SPEED_ARRAY",
		0x5c75b22,
		sizeof(uint16_t),
		{ 4, 16, 1, 1 } 
	},
	{
		"ATTR_I2C_DEV_TYPE",
		0x177f39f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_FAIL_COUNT",
		0x997b4ac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_INHIBIT_DIAGNOSTIC_RESET_ENGINE_A",
		0xb973ab4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_INHIBIT_DIAGNOSTIC_RESET_ENGINE_B",
		0x15da8c9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_INHIBIT_DIAGNOSTIC_RESET_ENGINE_C",
		0xc667245,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_INHIBIT_DIAGNOSTIC_RESET_ENGINE_D",
		0x22428b6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_INHIBIT_DIAGNOSTIC_RESET_ENGINE_E",
		0x5d36cba,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_SPEED",
		0x1d1394c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_I2C_SUB_POS",
		0x77c5cd3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IBSCOM_MCS_BASE_ADDR",
		0x1983e2d,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IBSCOM_PROC_BASE_ADDR",
		0x06d3ba7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ICACHE_ASSOC_SETS",
		0xacc8025,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ICACHE_BLOCK_SIZE",
		0x2c13580,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ICACHE_LINE_SIZE",
		0x934de01,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ICACHE_SIZE",
		0x7d275f0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INCREASED_PAU_FREQ",
		0x9a2f3fb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INITIATED_PM_HALT",
		0xaf6e256,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INIT_TO_AVAILABLE",
		0xed1d603,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INSIDE_SPECIAL_WAKEUP",
		0xc8bd195,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INTERPOSER_ECID",
		0xa6640ef,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INTERPOSER_FEATURE_HW632898",
		0xa687574,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INTERPOSER_REV",
		0x13fdcc3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_INT_CQ_TM_BAR_ADDR",
		0x85ef6e9,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_CONFIG_MODE",
		0x4950959,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_DRAWER_INTERCONNECT",
		0xf9a81a2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_FABRIC_LANE_REVERSAL",
		0x9640d61,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_FABRIC_TOD_CROSS_CONFIG",
		0x5401234,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_LINK_SPLIT",
		0xaa04632,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_LINK_TRAIN",
		0x94f0f3c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_MFG_BAD_LANE_VEC",
		0xf0ccd74,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_MFG_BAD_LANE_VEC_VALID",
		0x978723d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_MNFG_BAD_LANE_DURATION",
		0x3eb05bb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_MNFG_BAD_LANE_MAX",
		0x49eb22a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_PHY_TO_PAU_MAPPING",
		0x4c334cb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_PLL_BUCKET",
		0xad86cfa,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_SMP9_INTERCONNECT",
		0x628f4c8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IOHS_SPREAD_SPECTRUM",
		0xf4e4164,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_GROUNDED_CONTROLLERS",
		0xbca8078,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_GROUNDED_LINKS",
		0xb697f6d,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_CHANNEL_LOSS",
		0xbf1b8d3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_CHANNEL_LOSS_ISC1_WORKAROUND",
		0x53689d6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_PRE1",
		0x8ab374a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_PRE1_ISC1_WORKAROUND",
		0x85528b9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_PRE2",
		0x461601a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_IOHS_XTALK",
		0x2d5e154,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OBUS_DCCAL_FLAGS",
		0xaa3902b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OBUS_TX_FFE_POSTCURSOR",
		0x1952ef4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OBUS_TX_FFE_PRECURSOR",
		0xd0b5036,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OBUS_TX_MARGIN_RATIO",
		0xd54b4ac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OMI_CHANNEL_LOSS",
		0xb4bc1d3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OMI_PRE1",
		0x76d448e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_OMI_PRE2",
		0x16ca47a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_CHANNEL_TYPE",
		0x0d1a22c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_DEBUG",
		0x9ef1783,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_MFG_CHK",
		0x5c4a180,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_MFG_MIN_EYE_WIDTH",
		0xd9db2d5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_MFG_STRESS_PR_OFFSET_EVEN",
		0x5121315,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_O_MFG_STRESS_PR_OFFSET_ODD",
		0x1ca612d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_TANK_PLL_BYPASS",
		0xcf1e319,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_XBUS_CHAN_EQ",
		0xa607f58,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_XBUS_GRP0_PRE_BAD_LANE_DATA",
		0xae90c41,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_XBUS_GRP1_PRE_BAD_LANE_DATA",
		0xb78c1f9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_X_MFG_CHK",
		0x213ac30,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IO_X_MFG_MIN_EYE_WIDTH",
		0xbbf242e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IPL_TYPE",
		0x2022c38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IQ_STATIC_DATA_ENABLE",
		0xdca883d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_CALLOUT_INJECT_ACTION",
		0x061c783,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_CALLOUT_INJECT_ENABLE",
		0x36cb5ff,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_MODE",
		0x54d128f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_PAUSE_CONFIG",
		0x2cf6852,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_PAUSE_ENABLE",
		0x5171c01,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ISTEP_TIMEOUT",
		0xb846e46,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_IBM_SIMULATION",
		0x025f142,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_INTER_ENCLOSURE_BUS",
		0x56ef574,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_IOSCM",
		0xd7bebc5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_IPL_DECONFIG_ALLOWED",
		0x9712229,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_MASTER_CORE",
		0x0ed1fca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_MASTER_EX",
		0xe6c4c3f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_MASTER_NODE",
		0x1eb366d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_MPIPL",
		0xbe0ba18,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_PNOR_ECC_RECOVERY_IN_PROGRESS",
		0x7836c10,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_SIMULATION",
		0x4367508,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_SP_MODE",
		0x738ed86,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_STANDALONE",
		0xe54bcd6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IS_TCES_MODE_ENABLE",
		0x8944ca8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_IVRM_ENABLED",
		0x49b21cc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L2_CACHE_ASSOC_SETS",
		0x8845c5b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L2_CACHE_LINE_SIZE",
		0xfc7c1e8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L2_CACHE_SIZE",
		0x07a2758,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L2_HASCLOCKS",
		0xea7105b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L2_HASPOWER",
		0xdece9f6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L3_CACHE_LINE_SIZE",
		0xfc574bf,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L3_CACHE_SIZE",
		0xdbffc50,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L3_HASCLOCKS",
		0xe977d9f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_L3_HASPOWER",
		0x5437d12,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LAST_IPLTIME_EID",
		0x99b51a5,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LAST_KNOWN_CONFIGURED_MEM_SIZE_MB",
		0x85bae1f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LINK_SPEED",
		0xc7a1d47,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LINK_TRAIN",
		0xa7ea6d2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LMB_SIZE",
		0xc44c3e5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LPC_BUS_ADDR",
		0x1ffe3ce,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LPC_CONSOLE_CNFG",
		0x45149fa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_LPC_CONSOLE_INITIALIZED",
		0x649a489,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAIL_MESSAGE_BITMAP",
		0xfafcbf2,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MASTER_CORE",
		0xcd97b51,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_ALLOWED_DIMM_FREQ",
		0x01e31e8,
		sizeof(uint32_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_CHIPLETS_PER_PROC",
		0xfa1c9e6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_COMPUTE_NODES_PER_SYSTEM",
		0x8105e72,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_DIMMS_PER_MBA_PORT",
		0x9130cb8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_DIMM_POWER",
		0xfeeb8d6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_DMI_PER_PROC",
		0xa71e033,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_EID_ON_HBEL_FSP_A",
		0xd8793e4,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_EID_ON_HBEL_FSP_B",
		0x630ca7e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_EXS_PER_PROC_CHIP",
		0xa59a4fa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_EXS_PER_PROC_CHIP_ARCH_LIMIT",
		0x2c12791,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_INTERLEAVE_GROUP_SIZE",
		0xe595eec,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_LOL_ERR_CNT",
		0xc4572fd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_MBAS_PER_MEMBUF_CHIP",
		0x90ddd8e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_MBA_PORTS_PER_MBA",
		0xeb1d539,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_MCS_PER_SYSTEM",
		0x86e21ac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_MS_ADDR",
		0xc22853c,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_NUM_PSI_LINKS_PER_FSP",
		0x558f98e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_POWER",
		0x935d008,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_PROC_CHIPS_PER_NODE",
		0x8dc78ef,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MAX_SBE_SEEPROM_SIZE",
		0x97c0210,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MBA_DIMM",
		0x80b9cd7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MBA_PORT",
		0x5207f78,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MC_PLL_BUCKET",
		0xb43f2fe,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_MC_SYNC_MODE",
		0x241918a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MELTBOX_FREQ_PB",
		0x1b2a533,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MELTBOX_FREQ_X",
		0xc44fb48,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MELTBOX_NEST_FREQ_MHZ",
		0xd950380,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEMORY_BAR_REGS",
		0xf4f230f,
		sizeof(uint64_t),
		{ 4, 10, 2, 1 } 
	},
	{
		"ATTR_MEM_2N_MODE",
		0x85b98d6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_3DS_HEIGHT",
		0x3f6b102,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_AVDD_OFFSET_MILLIVOLTS",
		0x80161a9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_BASE",
		0x45a548d,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_BURST_LENGTH",
		0x62e05e5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_CA_PARITY_LATENCY",
		0xea74580,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_CS_ASSERT_IN_MPC",
		0x11db9be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_CS_CMD_LATENCY",
		0x92fced8,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_DFE_GAIN_BIAS",
		0x04e2520,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_DFE_SIGN_BIT",
		0xdceaabb,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_GLOBAL_DFE_GAIN",
		0xe30fb00,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_GLOBAL_DFE_TAP1",
		0x4c3e08d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_GLOBAL_DFE_TAP2",
		0xde7bca9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_GLOBAL_DFE_TAP3",
		0xb1d0a53,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_GLOBAL_DFE_TAP4",
		0x465e7ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_MIN_REF_RATE",
		0x16ed83e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_PLUG_RULES_SPD_REV_TESTED",
		0x703fb93,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_REF_TUF",
		0x40202e1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_SPD_CL_SUPPORTED",
		0xf669530,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_WR_CRC_AUTODISABLE_ENABLE",
		0xdf06b22,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_WR_CRC_AUTODISABLE_STATUS",
		0x66df8b2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_WR_CRC_AUTODISABLE_THRESHOLD",
		0xb9adbfd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_WR_CRC_AUTODISABLE_WINDOW",
		0x86917a6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DDR5_WR_CRC_ERR_STATUS",
		0xa232f81,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DEVICE15_MPSM",
		0xb07c927,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC02",
		0x8ecc32e,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC03",
		0xd82c5bd,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC04",
		0x5921342,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC05",
		0x50ba16b,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC0B",
		0xe153bec,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC0F",
		0x32c01e3,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC1X",
		0xedc754f,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F0RC7X",
		0xbdd1f8c,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC00",
		0x93af940,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC02",
		0x107988d,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC03",
		0x3f4dd16,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC04",
		0x1dabb0c,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC05",
		0xc46febc,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC1X",
		0xa411747,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC2X",
		0xbea907f,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC3X",
		0xaa68a22,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC4X",
		0xd415c67,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC5X",
		0x314253a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC6X",
		0xcd35acb,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_DDR4_F1RC7X",
		0xcea118a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_POS_METADATA",
		0xb5623a6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DIMM_TYPE_METADATA",
		0x0ec17cd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DRAM_ADDRESS_MIRRORING",
		0x5cdae1e,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DRAM_CWL",
		0x641d0e3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_DRAM_GEN_METADATA",
		0x856b84d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_ARDPTRINITVAL",
		0xcbf1228,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_ARDPTRINITVALOVR",
		0xc784cff,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_ATXDLY_A",
		0xd3dcb59,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_ATXDLY_B",
		0x8d11dd8,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_BYTE_ENABLES",
		0x9c16ebb,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_CHANNELS_PER_DIMM",
		0x7ac0e9a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDP_COMPATIBILITY",
		0x2e48910,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_CHANNEL_BUS_WIDTH",
		0x16d0d5a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_CHB_ACTIVE",
		0x82b8963,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_MEM_PORT_ENABLE",
		0xbe0602d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_MIN_SUPPORTED_SPD_REVISION",
		0x1e53923,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_PHY_VREF_RD",
		0x10c8327,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_RTT_PARK_RD",
		0x8b1986a,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_RTT_PARK_WR",
		0x5e7cb0a,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_RXEN_ADJ",
		0xde075fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_FALL_AC",
		0xf349c89,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_FALL_CK",
		0x3322c7e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_FALL_DQ",
		0x3cf621f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_RISE_AC",
		0x169e135,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_RISE_CK",
		0x11b28b1,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_TX_SLEW_RISE_DQ",
		0x7a1246a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_VREFCA_SWEEP_MAX",
		0xe9d04d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_VREFCA_SWEEP_MIN",
		0x01a8fc7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_VREFCS_SWEEP_MAX",
		0x158bb98,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_VREFCS_SWEEP_MIN",
		0x94d33d8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_WL_ADJ_END",
		0x9dc1f05,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DDR5_WL_ADJ_START",
		0x812d582,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_RANKS_CONFIGED",
		0x486f50e,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_RAW_CARD_DESIGN_REVISION",
		0xa8c5e49,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_RAW_CARD_REFERENCE_DESIGN",
		0x34c35e2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_SERIAL_NUMBER",
		0x4ea37f9,
		sizeof(uint8_t),
		{ 26, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_SIZE",
		0xebd258e,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_SPARE",
		0x7631332,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DIMM_TYPE",
		0xe3b5b79,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_BANK_BITS",
		0x9ebf155,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_BANK_GROUP_BITS",
		0xc9dddb2,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_CL",
		0x268a991,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_COLUMN_BITS",
		0x420ee16,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_DENSITY",
		0x956902a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_GEN",
		0x9cf4fc4,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_MDS",
		0x68400ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_MFG_ID",
		0xc11b0c7,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_MODULE_HEIGHT",
		0x2d07bed,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_PPR",
		0xb728460,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_ROW_BITS",
		0xdc339a7,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_SOFT_PPR",
		0x47d766c,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TCCD_L",
		0x2b8523d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TCCD_L_WR",
		0xa1bd115,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TFAW",
		0xdf2b36c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TMAW",
		0xa6c89f0,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRAS",
		0xa147b1c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRC",
		0xa31ee72,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRCD",
		0x2d75ccd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TREFI",
		0x95ec877,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRFC",
		0x2239266,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRFC_DLR",
		0x669e8d5,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRP",
		0xdfbd498,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRRD_DLR",
		0xf517753,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRRD_L",
		0x63e1613,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRRD_S",
		0xab82746,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TRTP",
		0xa970ba4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TWR",
		0x9dcade3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TWTR_L",
		0x68ccec0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_TWTR_S",
		0xcd0fc4e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_DRAM_WIDTH",
		0x41415b6,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC0_SWA_VOLTAGE_OFFSET",
		0x17daf7d,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC0_SWB_VOLTAGE_OFFSET",
		0x1587d89,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC0_SWC_VOLTAGE_OFFSET",
		0xd77c5ad,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC0_SWD_VOLTAGE_OFFSET",
		0xde2c10c,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC1_SWA_VOLTAGE_OFFSET",
		0x11f71fb,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC1_SWB_VOLTAGE_OFFSET",
		0xa8e207c,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC1_SWC_VOLTAGE_OFFSET",
		0xbdb835c,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC1_SWD_VOLTAGE_OFFSET",
		0x42964ef,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC2_SWA_VOLTAGE_OFFSET",
		0x4611411,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC2_SWB_VOLTAGE_OFFSET",
		0xfaf66cf,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC2_SWC_VOLTAGE_OFFSET",
		0xd05f482,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC2_SWD_VOLTAGE_OFFSET",
		0x32d9a77,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC3_SWA_VOLTAGE_OFFSET",
		0x1b14ba7,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC3_SWB_VOLTAGE_OFFSET",
		0x5bec079,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC3_SWC_VOLTAGE_OFFSET",
		0xb6d6b39,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EFD_PMIC3_SWD_VOLTAGE_OFFSET",
		0x1fe3e53,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_EXTCALRESVAL",
		0x158ad24,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_FOUR_RANK_MODE",
		0x6a61fce,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_FREQ",
		0x08a4518,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_HOST_TO_DDR_SPEED_RATIO",
		0x9f7bd88,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_HYBRID",
		0x6cd872a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_HYBRID_MEMORY_TYPE",
		0xc08f9e2,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_LOGICAL_RANKS_PER_DIMM",
		0xda95638,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_MDS_DDIMM",
		0xbec986e,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_MEMALERTEN",
		0xcf3611f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_MODULE_MFG_ID",
		0xc5bf44b,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_MODULE_THERMAL_SENSORS",
		0xcfe5811,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_MRAM_SUPPORT",
		0x3b8b4a9,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_NIBBLE_ENABLES",
		0x5893c69,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_NIBBLE_MAP",
		0x6e3d1bf,
		sizeof(uint8_t),
		{ 2, 20, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_NUM_MASTER_RANKS_PER_DIMM",
		0x0b12e9e,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PACKAGE_RANK_MAP",
		0xb28a8fb,
		sizeof(uint8_t),
		{ 2, 20, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_MFG_ID",
		0x7bc6bec,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_PHASE_COMB",
		0xeb660ee,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_REDUNDANCY",
		0x647869e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_REVISION",
		0x70d8395,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SEQUENCE",
		0xb5f758a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SEQUENCE_CFG0_R40",
		0xcca10d0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SEQUENCE_CFG1_R41",
		0x9a8a800,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SEQUENCE_CFG2_R42",
		0x80964fa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SEQUENCE_CFG3_R43",
		0x64f3058,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_CURRENT_WARNING",
		0x579faa0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_SEQUENCE_DELAY",
		0x18bfacf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_SEQUENCE_ORDER",
		0x729602f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_VOLTAGE_COARSE_OFFSET",
		0x81e7c0c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_VOLTAGE_OFFSET",
		0x40aa7b9,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_VOLTAGE_RANGE_SELECT",
		0x1902629,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWA_VOLTAGE_SETTING",
		0x4ac8a0d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_CURRENT_WARNING",
		0x0ca664f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_SEQUENCE_DELAY",
		0x7663ec5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_SEQUENCE_ORDER",
		0xc6d3718,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_VOLTAGE_COARSE_OFFSET",
		0x2601b9e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_VOLTAGE_OFFSET",
		0xb6cd941,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_VOLTAGE_RANGE_SELECT",
		0x1ea2968,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWB_VOLTAGE_SETTING",
		0x2e3af06,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_CURRENT_WARNING",
		0xa35f85d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_SEQUENCE_DELAY",
		0x4e0385e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_SEQUENCE_ORDER",
		0x8b159e0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_VOLTAGE_COARSE_OFFSET",
		0xec20bac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_VOLTAGE_OFFSET",
		0x24a0f92,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_VOLTAGE_RANGE_SELECT",
		0xd881d9a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWC_VOLTAGE_SETTING",
		0x0cf02b5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_CURRENT_WARNING",
		0x8f00dcd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_SEQUENCE_DELAY",
		0x40c76ee,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_SEQUENCE_ORDER",
		0xfcb8929,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_VOLTAGE_COARSE_OFFSET",
		0x8d2dc76,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_VOLTAGE_OFFSET",
		0xa5c1fbe,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_VOLTAGE_RANGE_SELECT",
		0x070464c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC0_SWD_VOLTAGE_SETTING",
		0xc0b9ce3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_MFG_ID",
		0x043e8e0,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_PHASE_COMB",
		0xb9afeb8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_REDUNDANCY",
		0x3126bb2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_REVISION",
		0x3565220,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SEQUENCE",
		0x7e3a34b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SEQUENCE_CFG0_R40",
		0x990d5ea,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SEQUENCE_CFG1_R41",
		0x20ee8fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SEQUENCE_CFG2_R42",
		0x6a6a83d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SEQUENCE_CFG3_R43",
		0x6fd010f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_CURRENT_WARNING",
		0x8455d8c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_SEQUENCE_DELAY",
		0x11f5010,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_SEQUENCE_ORDER",
		0xa3a1b06,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_VOLTAGE_COARSE_OFFSET",
		0x29e9ba8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_VOLTAGE_OFFSET",
		0xbfcaf43,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_VOLTAGE_RANGE_SELECT",
		0x89b9a48,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWA_VOLTAGE_SETTING",
		0xdd84994,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_CURRENT_WARNING",
		0x21889e5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_SEQUENCE_DELAY",
		0x0036125,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_SEQUENCE_ORDER",
		0xf43e474,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_VOLTAGE_COARSE_OFFSET",
		0xcb12e02,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_VOLTAGE_OFFSET",
		0x94901ad,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_VOLTAGE_RANGE_SELECT",
		0xa7e62d3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWB_VOLTAGE_SETTING",
		0x926d37e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_CURRENT_WARNING",
		0xf46d0b9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_SEQUENCE_DELAY",
		0x0310a49,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_SEQUENCE_ORDER",
		0x95a5499,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_VOLTAGE_COARSE_OFFSET",
		0x815fdfc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_VOLTAGE_OFFSET",
		0x9e2f6b7,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_VOLTAGE_RANGE_SELECT",
		0x9df5889,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWC_VOLTAGE_SETTING",
		0xb9c0fc3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_CURRENT_WARNING",
		0x8e5a6f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_SEQUENCE_DELAY",
		0xeaacc79,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_SEQUENCE_ORDER",
		0x36db145,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_VOLTAGE_COARSE_OFFSET",
		0xc14452f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_VOLTAGE_OFFSET",
		0x4ebecae,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_VOLTAGE_RANGE_SELECT",
		0x65a19cd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC1_SWD_VOLTAGE_SETTING",
		0xcd4cd7a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_MFG_ID",
		0x55cb385,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_PHASE_COMB",
		0x3982c85,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_REVISION",
		0xab8959f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SEQUENCE",
		0xe6dbaaf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SEQUENCE_CFG0_R40",
		0xb63387a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SEQUENCE_CFG1_R41",
		0xf12ba3b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SEQUENCE_CFG2_R42",
		0x346c2dc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SEQUENCE_CFG3_R43",
		0x666532f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_CURRENT_WARNING",
		0x3fa5781,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_SEQUENCE_DELAY",
		0xf3db67c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_SEQUENCE_ORDER",
		0x57acb4d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_VOLTAGE_COARSE_OFFSET",
		0xa813135,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_VOLTAGE_OFFSET",
		0x140ddc8,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_VOLTAGE_RANGE_SELECT",
		0x837c29b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWA_VOLTAGE_SETTING",
		0xf5ddeb3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_CURRENT_WARNING",
		0x776a736,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_SEQUENCE_DELAY",
		0x59daf6e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_SEQUENCE_ORDER",
		0x91498cd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_VOLTAGE_COARSE_OFFSET",
		0xd9976e1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_VOLTAGE_OFFSET",
		0xd0c86c6,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_VOLTAGE_RANGE_SELECT",
		0xbf0610c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWB_VOLTAGE_SETTING",
		0x89937ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_CURRENT_WARNING",
		0x4b8ed0c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_SEQUENCE_DELAY",
		0x42d226a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_SEQUENCE_ORDER",
		0xc635854,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_VOLTAGE_COARSE_OFFSET",
		0xd940b8a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_VOLTAGE_OFFSET",
		0xeb26033,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_VOLTAGE_RANGE_SELECT",
		0x148c185,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWC_VOLTAGE_SETTING",
		0xd9da851,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_CURRENT_WARNING",
		0x67bf05e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_SEQUENCE_DELAY",
		0x5d7eb9f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_SEQUENCE_ORDER",
		0x94c8d08,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_VOLTAGE_COARSE_OFFSET",
		0x7532644,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_VOLTAGE_OFFSET",
		0x5164d0c,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_VOLTAGE_RANGE_SELECT",
		0x67fa3f7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC2_SWD_VOLTAGE_SETTING",
		0x9330425,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_MFG_ID",
		0x26a0f2c,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_PHASE_COMB",
		0x10d5dbc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_REVISION",
		0xcf18598,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SEQUENCE",
		0xf64a675,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SEQUENCE_CFG0_R40",
		0x45f1d0e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SEQUENCE_CFG1_R41",
		0x3342c24,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SEQUENCE_CFG2_R42",
		0x922a9c2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SEQUENCE_CFG3_R43",
		0xc122ecf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_CURRENT_WARNING",
		0x72c194d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_SEQUENCE_DELAY",
		0xea4c21f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_SEQUENCE_ORDER",
		0x8e10b37,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_VOLTAGE_COARSE_OFFSET",
		0x4971d0d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_VOLTAGE_OFFSET",
		0xe83d6b0,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_VOLTAGE_RANGE_SELECT",
		0x2354c19,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWA_VOLTAGE_SETTING",
		0x3b98454,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_CURRENT_WARNING",
		0x582dc2d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_SEQUENCE_DELAY",
		0x58e2a3d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_SEQUENCE_ORDER",
		0x098c48e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_VOLTAGE_COARSE_OFFSET",
		0x0f27151,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_VOLTAGE_OFFSET",
		0x359f511,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_VOLTAGE_RANGE_SELECT",
		0x920fc84,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWB_VOLTAGE_SETTING",
		0xd3087be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_CURRENT_WARNING",
		0xf6aafcb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_SEQUENCE_DELAY",
		0xdb65bdd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_SEQUENCE_ORDER",
		0xb9ee451,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_VOLTAGE_COARSE_OFFSET",
		0xc6e1174,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_VOLTAGE_OFFSET",
		0x8e6a027,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_VOLTAGE_RANGE_SELECT",
		0xe98cc14,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWC_VOLTAGE_SETTING",
		0x854b79b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_CURRENT_WARNING",
		0xa71ccac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_SEQUENCE_DELAY",
		0x0f1b8e1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_SEQUENCE_ORDER",
		0xa608b2e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_VOLTAGE_COARSE_OFFSET",
		0x284334b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_VOLTAGE_OFFSET",
		0xb5ade27,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_VOLTAGE_RANGE_SELECT",
		0x23b1510,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PMIC3_SWD_VOLTAGE_SETTING",
		0x2e226ad,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PRIM_BUS_WIDTH",
		0x5176174,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PRIM_DIE_COUNT",
		0xc278ed9,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PRIM_STACK_TYPE",
		0x888c903,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_PSTATES",
		0x365d06b,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_RCD_MFG_ID",
		0x603ef87,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_REDUNDANT_CS_EN",
		0x987618b,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_REGISTER_REV",
		0xed9e25a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_REGISTER_TYPE",
		0x0b4a2fc,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_SPD_CONTENT_REVISION",
		0x8e2a2e3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_SPD_REVISION",
		0xd3704fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_SUPPORTED_RCD",
		0x12aa7fd,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_AVAIL",
		0x8032442,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_I2C_ADDR",
		0xc17a0dc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_LOCATION",
		0x23e3fd9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_SECOND_AVAIL",
		0x1a17aae,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_SECOND_I2C_ADDR",
		0x3e8c6de,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_SECOND_LOCATION",
		0x4028ad3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_TYPE",
		0xef60a38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_0_USAGE",
		0xb1987de,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_AVAIL",
		0x72f340b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_I2C_ADDR",
		0x38feb73,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_LOCATION",
		0xf3d0e4c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_SECOND_AVAIL",
		0xc593c05,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_SECOND_I2C_ADDR",
		0xdded48e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_SECOND_LOCATION",
		0xde03ed3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_TYPE",
		0xc3f35bf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_1_USAGE",
		0xf21023b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_2_AVAIL",
		0x8072646,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_2_I2C_ADDR",
		0xdaf3379,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_2_LOCATION",
		0xe5bb6b4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_2_TYPE",
		0xaa2e048,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_2_USAGE",
		0x0bf05d1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_3_AVAIL",
		0x7130751,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_3_I2C_ADDR",
		0xa7fc90e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_3_LOCATION",
		0x856b2c4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_3_TYPE",
		0xfefe6c5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_3_USAGE",
		0xc070edb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_DIFF_AVAIL",
		0x0b14185,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_DIFF_I2C_ADDR",
		0x079d52d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_DIFF_TYPE",
		0xa99637f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_DIFF_USAGE",
		0xeda695b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_THERM_SENSOR_READ_OVERRIDE",
		0x6e979d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_TSV_8H_SUPPORT",
		0x1dbe9ca,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_VOLT_VDDQ",
		0x5e0f70a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_VOLT_VDDR",
		0xc406bf3,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_VOLT_VPP",
		0xbd8bf3c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EFF_Z_MODE",
		0xdcfdaa2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_DFIMRL_CLK",
		0xe3a87c3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_DRAM_ADDRESS_MIRRORING",
		0x615ada9,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_FIRMWARE_EMULATION_MODE",
		0xc4230d1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_INIT_PHY_VREF",
		0x5a2ffe9,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_INIT_VREF_DQ",
		0xba62227,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_RCD_DIC",
		0x17dbf79,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_RCD_SLEW_RATE",
		0xae13b85,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_RCD_VOLTAGE_CTRL",
		0x27bb801,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_SPD_CL_SUPPORTED",
		0x70d4d6d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_EXP_SPD_TAA_MIN",
		0xb52fb82,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_IGNORE_PLUG_RULES",
		0x4a72e5b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_IGNORE_PLUG_RULES_DIMM_HEIGHT_MIX",
		0xe756f73,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_IGNORE_PLUG_RULES_DIMM_SIZE_MIX",
		0x8ec531c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_IGNORE_PLUG_RULES_SPD_REV_CHECK",
		0x8b4f3ef,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_INTERNAL_WR_TIMING_MODE",
		0x97bb3e7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_MIRROR_PLACEMENT_POLICY",
		0x1c0d755,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_MPSM",
		0x28f86dd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_MRW_IS_PLANAR",
		0x8fe48a2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_OVERRIDE_FREQ_LIMITATION",
		0xa0cb35b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_PMIC_4U_N_MODE",
		0x69153a8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_PMIC_FORCE_N_MODE",
		0x7913dc5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_PORT",
		0x929775e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_PORT_POS_OF_FAIL_THROTTLE",
		0x6b341e3,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_RDIMM_BUFFER_DELAY",
		0x8b58e8c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_REF_INTERVAL_RATE_INDIC",
		0x231c430,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_REF_WIDE_RANGE",
		0x98a084e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_REORDER_QUEUE_SETTING",
		0x6a83eea,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DIMM_RCD_IBT_CA",
		0xb0328d5,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DIMM_RCD_IBT_CKE",
		0xaf98ef4,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DIMM_RCD_IBT_CS",
		0xedd201c,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DIMM_RCD_IBT_ODT",
		0xe7f65d8,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DRAM_DRV_IMP_DQ_DQS",
		0xc68f5ea,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DRAM_PREAMBLE",
		0x3b00047,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DRAM_RTT_NOM",
		0x9238d54,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DRAM_RTT_PARK",
		0x183c3a9,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_DRAM_RTT_WR",
		0xc20758d,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_GEARDOWN_MODE",
		0x9641a9b,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_DQ_DQS",
		0x6040956,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_EQ_DQ_DQS",
		0x486d205,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_CLK",
		0x6ed9642,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_CMD_ADDR",
		0x98551c7,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_CNTL",
		0x2e199fe,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_CSCID",
		0x4354d61,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_DQ_DQS_PULL_DOWN",
		0x9688fe1,
		sizeof(uint16_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_IMP_DQ_DQS_PULL_UP",
		0x22941b3,
		sizeof(uint16_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_SLEW_RATE_CLK",
		0x2d6153f,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_SLEW_RATE_CMD_ADDR",
		0x3371dc2,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_SLEW_RATE_CNTL",
		0x944866d,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_SLEW_RATE_CSCID",
		0x0202f28,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_DRV_SLEW_RATE_DQ_DQS",
		0xc3b3e7b,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_RCV_EQ_DQ_DQS",
		0xd969845,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_RCV_IMP_ALERT_N",
		0x55a8aba,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_MC_RCV_IMP_DQ_DQS",
		0x164477a,
		sizeof(uint16_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_ODT_RD",
		0x6de3ae5,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_ODT_WR",
		0x71a31ad,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_PHY_DRV_IMP_DQ_DQS_PULL_UP",
		0xa611583,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_PHY_EQUALIZATION",
		0xf908b6e,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_SIGNATURE_HASH",
		0x892eeb6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_VREF_DRAM_WR",
		0xd09f4f3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_VREF_MC_RD",
		0x9cc78b8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_SI_WINDAGE_RD_CTR",
		0x048d1a2,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_THERMAL_INIT_COMPLETE",
		0xb8d2a23,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_VCS_OFFSET_MILLIVOLTS",
		0xb7b1ac5,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_VDDR_OFFSET_MILLIVOLTS",
		0xe390ea6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_VDD_OFFSET_MILLIVOLTS",
		0xcc28df8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_VPD_DQ_MAP",
		0x552f904,
		sizeof(uint8_t),
		{ 80, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_VPP_OFFSET_MILLIVOLTS",
		0xd4a475d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MEM_WL_INTERNAL_CYCLE_ALIGNMENT",
		0x137d006,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_MFG_FLAGS",
		0x2f0f359,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_MFG_SCREEN_OMI_CRC_ALLOWED",
		0x650fda1,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MFG_SCREEN_OMI_EDPL_ALLOWED",
		0x2d47f25,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MFG_TRACE_ENABLE",
		0xb257082,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MGC_LOAD_SOURCE",
		0xce01813,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MINI_EC",
		0xb630402,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MIN_FREQ_MHZ",
		0x6f08f4b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MIN_NUM_PSI_LINKS_PER_FSP",
		0x2a4b620,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MIN_PROC_POWER_PER_CHIP",
		0x0db7587,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MIRROR_BASE_ADDRESS",
		0x6a258b6,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MMIO_PHYS_ADDR",
		0x0505dad,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_ABUS_MIN_EYE_HEIGHT",
		0xeaa3fa0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_ABUS_MIN_EYE_WIDTH",
		0x0f9d926,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_DMI_MIN_EYE_HEIGHT",
		0xccc15e8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_DMI_MIN_EYE_WIDTH",
		0x72b7486,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L2_CACHE_CES",
		0x882b99c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L2_DIR_CES",
		0x10ae5b3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L2_LINE_DELETES",
		0x16cbbfb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L3_CACHE_CES",
		0x70e6a22,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L3_DIR_CES",
		0xa0dd16a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_L3_LINE_DELETES",
		0x1788780,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_IMPES",
		0x1049d17,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_IPL_SOFT_CE_TH_ALGO",
		0x1e8208b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_IUES",
		0x723f825,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_RCD_PARITY_ERRORS",
		0x96069bd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_RT_RCE_PER_RANK",
		0xf907441,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_TH_MEMORY_RT_SOFT_CE_TH_ALGO",
		0xdb89c57,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MNFG_XBUS_MIN_EYE_WIDTH",
		0xcbd7ed0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MODEL_EC",
		0xe281690,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRU_ID",
		0x639dd88,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_CONVERT_DCBZ_TO_RWITM",
		0xe911abb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_DDR3_VDDR_MAX_LIMIT",
		0x6ac0905,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_DDR3_VDDR_MAX_LIMIT_POST_DRAM_INIT",
		0xdde9311,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_DDR4_VDDR_MAX_LIMIT",
		0x69b9e21,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_DDR4_VDDR_MAX_LIMIT_POST_DRAM_INIT",
		0x7b5c147,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_DEFAULT_RISK_LEVEL",
		0x3884378,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_FREQ_SYSTEM_CORE_FLOOR_MHZ",
		0x2c34124,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_HW_MIRRORING_ENABLE",
		0xb7dddfb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_L2_INCREASE_JITTER",
		0xb9dc486,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_MAX_DDR_FREQ_ON_IOSCM",
		0xa7b26cf,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_MAX_DDR_FREQ_PER_SLOT",
		0x8a18c2a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_MEM_THROTTLE_DENOMINATOR",
		0x8218c38,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_P1PF_MIN_CONFIDENCE_3",
		0x5da8533,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_VMEM_REGULATOR_MEMORY_POWER_LIMIT_PER_DIMM_DDR3",
		0x1949903,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MRW_VMEM_REGULATOR_MEMORY_POWER_LIMIT_PER_DIMM_DDR4",
		0x414abdc,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSL_CHECK",
		0x00fabfe,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSL_FIELD_SUPPORTED",
		0x2fd4ceb,
		sizeof(uint16_t),
		{ 12, 1, 1, 1 } 
	},
	{
		"ATTR_MSL_MFG_ALLOW",
		0x596417a,
		sizeof(uint16_t),
		{ 12, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_AVDD_PROGRAM",
		0xefb544c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_AVDD_INTERCEPT",
		0xbb0ac42,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_AVDD_SLOPE_ACTIVE",
		0x0b207b3,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_AVDD_SLOPE_INACTIVE",
		0xbaa5d46,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VCS_INTERCEPT",
		0x42b4fae,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VCS_SLOPE_ACTIVE",
		0xdfbb097,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VCS_SLOPE_INACTIVE",
		0x0cbd3fd,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VDD_INTERCEPT",
		0xe54617c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VDD_SLOPE_ACTIVE",
		0x9aef30c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CENT_VDD_SLOPE_INACTIVE",
		0x3e7ad0d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CHECK_FOR_READY_TIMEOUT",
		0xc470648,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_CONFIG_FREQ_LIMIT",
		0x8f2556b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_DATABUS_UTIL_PER_MBA",
		0xa2f9494,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EFF_WR_CRC",
		0x53b8bd1,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_CDR_BW_OVERRIDE_ENABLE",
		0xc9b42ea,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_CDR_BW_OVERRIDE_VALUE",
		0xf7bb641,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_COMM_STATE",
		0xc4be98e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_API_VERSION",
		0x08765f3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_FAILED_AUTHENTICATION_A",
		0xe31e711,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_FAILED_AUTHENTICATION_B",
		0xf21ca17,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_PARTITION_ID",
		0x9604985,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_VERSION_A",
		0x38a9ed0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_FW_VERSION_B",
		0x32ff12d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_I2C_FW_LOG_DUMP_DISABLE",
		0x3cedd73,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_INTR_MASK_DISABLE",
		0xb33ecf6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_OMI_CDR_BW_OVERRIDE",
		0x501dc5e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_OMI_CDR_OFFSET",
		0xebc1836,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_OMI_CDR_OFFSET_LANE_MASK",
		0x0adf7aa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_OMI_SETUP_POLL_COUNT",
		0xe8bc6dc,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_REORDER_QUEUE_SETTING",
		0x413ef1d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_CA_PARITY",
		0xd86ab4c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_CA_PARITY_ERROR_STATUS",
		0x37e48f5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_CRC_ERROR_CLEAR",
		0xc18acac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_CRC_WR_LATENCY",
		0x36f124b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DATA_MASK",
		0xffba6d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC00",
		0x53e9209,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC01",
		0xcced88f,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC03",
		0x69f97d1,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC04",
		0x8560487,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC05",
		0x3d3e8d5,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC0B",
		0x4eb8996,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC0E",
		0xd5c924a,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC0F",
		0x8b29691,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC1X",
		0x07ccc77,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F0RC7X",
		0x42f81c1,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F1RC00",
		0x52b38f3,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F1RC02",
		0x7628329,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F1RC03",
		0x017bc4f,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F1RC04",
		0xec99916,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DDR4_F1RC05",
		0x9a3213c,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_AL",
		0xaa54450,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_BURST_LENGTH",
		0xefe1a41,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_DLL_ENABLE",
		0x3ca6acc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_DLL_RESET",
		0x68495bc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_LPASR",
		0x8046daf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_ODIC",
		0xb03f256,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_OUTPUT_BUFFER",
		0x2df5e4a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_RBT",
		0x232c72e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_RTT_NOM",
		0x3a53581,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_RTT_PARK",
		0xd82d29a,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_RTT_WR",
		0x25683a0,
		sizeof(uint8_t),
		{ 2, 4, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_TDQS",
		0x747f7a5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_TM",
		0xe77b99f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_DRAM_WR_LVL_ENABLE",
		0x9243579,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_GEARDOWN_MODE",
		0x1f50813,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_INTERNAL_VREF_MONITOR",
		0x571be23,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_MAX_POWERDOWN_MODE",
		0x3eda036,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_MPR_MODE",
		0xc9c2d97,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_MPR_PAGE",
		0x803a0ef,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_MPR_RD_FORMAT",
		0x2fae486,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_ODT_INPUT_BUFF",
		0x93f2355,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_PER_DRAM_ACCESS",
		0x905ce7f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_RD_PREAMBLE",
		0x36519d8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_RD_PREAMBLE_TRAIN",
		0x310948f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_READ_DBI",
		0xc77c618,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_SELF_REF_ABORT",
		0x0cf60f4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_TEMP_READOUT",
		0x5b0aae0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_VREF_DQ_TRAIN_ENABLE",
		0xcac6a4c,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_VREF_DQ_TRAIN_RANGE",
		0xdfb2703,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_VREF_DQ_TRAIN_VALUE",
		0x0c63607,
		sizeof(uint8_t),
		{ 2, 4, 20, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_WRITE_DBI",
		0x26a1129,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_RESP_WR_PREAMBLE",
		0x8ccc316,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_EXP_SERIAL_NUMBER",
		0x73ade63,
		sizeof(uint8_t),
		{ 26, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_FREQ",
		0xe88d183,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_INTERLEAVE_ENABLE",
		0x54fd267,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_INTERLEAVE_GRANULARITY",
		0x41ed7c4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_IS_APOLLO",
		0x3c26b28,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MBA_ADDR_INTERLEAVE_BIT",
		0x8ee2d89,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MBA_CACHELINE_INTERLEAVE_MODE",
		0x771b18e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MCC_GROUP_32",
		0x030e8ef,
		sizeof(uint32_t),
		{ 16, 21, 1, 1 } 
	},
	{
		"ATTR_MSS_MEM_IPL_COMPLETE",
		0x647f6d0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MEM_MC_IN_GROUP",
		0xc666c00,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MNFG_EDPL_THRESHOLD",
		0x2b21694,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MNFG_EDPL_TIME",
		0x6a4f7bc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_ALLOW_DDR5",
		0x4d2d908,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_ALLOW_UNSUPPORTED_RCW",
		0x40bfda4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_AVDD_OFFSET_ENABLE",
		0xfc9bdd9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_CONFIG_FREQ_LIMIT",
		0x7d6c44c,
		sizeof(uint16_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DDR5_DRAM_READ_CRC",
		0x452cbf0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DDR5_MAX_DRAM_DATABUS_UTIL",
		0x6cba771,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DIMM_HEIGHT_MIXING_POLICY",
		0x9f5b11a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DIMM_POWER_CURVE_PERCENT_UPLIFT",
		0xd4bbddc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DIMM_POWER_CURVE_PERCENT_UPLIFT_IDLE",
		0x07bf802,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DIMM_SLOT_AIRFLOW",
		0x939f9be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DRAM_2N_MODE",
		0x2997eae,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_DRAM_WRITE_CRC",
		0x7b7fc78,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_ENTER_STR_TIME",
		0xd3b25a9,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_FINE_REFRESH_MODE",
		0x87bdfb9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_FORCE_BCMODE_OFF",
		0x86bad95,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_IDLE_POWER_CONTROL_REQUESTED",
		0x7f51090,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_IDLE_PSMODE_ENTER_STR_TIME",
		0xc4be99d,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_IDLE_PSMODE_MIN_DOMAIN_REDUCTION_TIME",
		0x3f8999b,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_MAX_DRAM_DATABUS_UTIL",
		0x61d3421,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_MAX_NUMBER_DIMMS_POSSIBLE_PER_VMEM_REGULATOR",
		0x3e06dcd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_MEM_M_DRAM_CLOCKS",
		0x0fb9e1f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_MIN_DOMAIN_REDUCTION_TIME",
		0xf278a76,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_MIN_DOMAIN_REDUCTION_TIME_FOR_POWER_CONTROL_OFF",
		0x7dfffde,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_NVDIMM_PLUG_RULES",
		0x424be69,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_CURRENT_CURVE_WITH_LIMIT",
		0xafeb5ce,
		sizeof(uint64_t),
		{ 25, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_PWR_INTERCEPT",
		0x5c0af49,
		sizeof(uint64_t),
		{ 50, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_PWR_SLOPE",
		0xbc51273,
		sizeof(uint64_t),
		{ 50, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_RESET_GROUP",
		0x464339e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_SAFEMODE_UTIL_ARRAY",
		0x2e9bbeb,
		sizeof(uint64_t),
		{ 50, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OCMB_THERMAL_MEMORY_POWER_LIMIT",
		0x948b8b8,
		sizeof(uint64_t),
		{ 25, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_OVERRIDE_THERM_SENSOR_USAGE",
		0x3d77935,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_PERIODIC_MEMCAL_MODE_OPTIONS",
		0x9c3a3d6,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_PERIODIC_ZQCAL_MODE_OPTIONS",
		0x1fddb6b,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_POWER_CONTROL_REQUESTED",
		0x6d05234,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_PWR_INTERCEPT",
		0xc0f9335,
		sizeof(uint64_t),
		{ 100, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_PWR_SLOPE",
		0xb3e8ad9,
		sizeof(uint64_t),
		{ 100, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_REFRESH_RATE_REQUEST",
		0xbd13798,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_RESET_DELAY_BEFORE_CAL",
		0x4f60a5e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_SAFEMODE_DRAM_DATABUS_UTIL",
		0x2b5f6b7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_SAFEMODE_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0x5fd9713,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_SUPPORTED_DRAM_WIDTH",
		0x72e61a8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_SUPPORTED_FREQ",
		0x23d66fa,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_TEMP_REFRESH_MODE",
		0x4c3dbf1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_TEMP_REFRESH_RANGE",
		0x99f7795,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_THERMAL_MEMORY_POWER_LIMIT",
		0xbe06c50,
		sizeof(uint64_t),
		{ 10, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_THERMAL_SENSOR_POLLING_PERIOD",
		0x2b742a3,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_VCS_OFFSET_ENABLE",
		0xa15fc01,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_VDDR_OFFSET_ENABLE",
		0xd7f8bcd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_VDD_OFFSET_ENABLE",
		0xc62f1ae,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_VMEM_REGULATOR_POWER_LIMIT_PER_DIMM_ADJ_ENABLE",
		0xe5e91b7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_MRW_VPP_OFFSET_ENABLE",
		0xf844545,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_APPINTR_OBJ_HANDLE",
		0x448c629,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_CHECKSTOP_OBJ_HANDLE",
		0x203d77f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_DISABLE_THERM_INIT_READ",
		0xc87684a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_ECID",
		0x96b7c4b,
		sizeof(uint16_t),
		{ 14, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_ENTERPRISE_MODE",
		0x326e0e2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_ENTERPRISE_POLICY",
		0x82cf1be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_ADAPTATION_MODE",
		0x7e23d04,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_DFE_DISABLE",
		0xa31ec38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_DL_LAYER_BOOT_MODE",
		0x45764b5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_FW_MODE",
		0x4a69bbd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_LANE_MODE",
		0x725d3a6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_OPENCAPI_LOOPBACK_TEST",
		0x4c3ccba,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_SERDES_FREQUENCY",
		0x134e3f0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_BOOT_CONFIG_TRANSPORT_LAYER",
		0xd4a3c59,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_OMI_CFG_ENDIAN_CTRL",
		0xb36fcfa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_STRUCT_ENDIAN",
		0xb88d1cf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_STRUCT_MMIO_ENDIAN_CTRL",
		0x2851ca1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_EXP_STRUCT_MMIO_WORD_SWAP",
		0x00ea92e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_HALF_DIMM_MODE",
		0x1a9b1f1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_HALF_DIMM_MODE_OVERRIDE",
		0x5a56a24,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_NONENTERPRISE_MODE_OVERRIDE",
		0x4d84e76,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_ODY_OMI_CFG_ENDIAN_CTRL",
		0xaf57fed,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_PHY_INIT_MODE",
		0x423512e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_RECOV_OBJ_HANDLE",
		0xa432982,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OCMB_SPECATTN_OBJ_HANDLE",
		0x09d1306,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_ODY_PASSED_SWIZZLE_DETECT",
		0xf620eaa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_ODY_PHY_IMAGE_SELECT",
		0x4aa1c38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OMI_EDPL_DISABLE",
		0x8990bb0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_OMI_VDD_UPLIFT_APPLIED",
		0x0157499,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_PHY_SEQ_REFRESH",
		0x13326ac,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_POST_MEMDIAGS_READ_SUBTEST",
		0x5d966f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_POST_MEMDIAGS_READ_SUBTEST_FAIL_BEHAVIOR",
		0x5ed4258,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_RDVREF_CAL_ENABLE",
		0x7ce66ef,
		sizeof(uint16_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_RTT_NOM_OVERRIDE_DISABLE",
		0xd34bb04,
		sizeof(uint8_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_MSS_RUN_DCD_CALIBRATION",
		0x775e116,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_SAFEMODE_DRAM_DATABUS_UTIL",
		0xb5c4f8b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VCS_PROGRAM",
		0xb4f1718,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VDDR_PROGRAM",
		0x51289c7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VDD_PROGRAM",
		0x17228f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_AVDD_MILLIVOLTS",
		0x6f09c49,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_AVDD_OFFSET_MILLIVOLTS",
		0x4f0f469,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR3_VDDR_INTERCEPT",
		0xbdf333e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR3_VDDR_INTERCEPT_POST_DRAM_INIT",
		0x829fde2,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR3_VDDR_SLOPE",
		0x10d2a3d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR3_VDDR_SLOPE_POST_DRAM_INIT",
		0x420d32d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR4_VDDR_INTERCEPT",
		0x56b3514,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR4_VDDR_INTERCEPT_POST_DRAM_INIT",
		0x6129fe7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR4_VDDR_SLOPE",
		0x5d56393,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_DDR4_VDDR_SLOPE_POST_DRAM_INIT",
		0xb11a217,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VCS_MILLIVOLTS",
		0xc76fe71,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VCS_OFFSET_MILLIVOLTS",
		0x32d623a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VDDR_MILLIVOLTS",
		0x3317838,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VDDR_OFFSET_MILLIVOLTS",
		0x666457d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VDD_MILLIVOLTS",
		0xdcbd688,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VDD_OFFSET_MILLIVOLTS",
		0x9a3b18e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_INTERCEPT",
		0x3aa234f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_INTERCEPT_POST_DRAM_INIT",
		0xd513657,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_MILLIVOLTS",
		0x18a11eb,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_OFFSET_MILLIVOLTS",
		0x1166570,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_SLOPE",
		0x72f49a4,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VOLT_VPP_SLOPE_POST_DRAM_INIT",
		0xe2c64ec,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VPD_MT_MC_BIAS_TRIM",
		0x18dd068,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_MSS_VPP_PROGRAM",
		0x2280840,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NDL_MESHCTRL_SETUP",
		0x8ad2e2a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_DPLL_BYPASS",
		0x2d603ab,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_LEAKAGE_PERCENT",
		0x787d424,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_PLL_BUCKET",
		0x02190b7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_PLL_FREQ_BUCKETS",
		0xad3e4fe,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_PLL_FREQ_I2CDIV_LIST",
		0x78c64c6,
		sizeof(uint32_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_PLL_FREQ_LIST",
		0x9b7099c,
		sizeof(uint32_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_VCS_ID",
		0xc498800,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_VDDR_ID",
		0x6a22222,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_VDD_ID",
		0x89224bc,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_VDN_ID",
		0x61356e1,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NEST_VIO_ID",
		0xec8827a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_CTRL_MARK",
		0xb9cc761,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_CTRL_TRIG",
		0x65c995d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_HTMSC_MODE_CAPTURE",
		0x464bfaf,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_HTMSC_MODE_CONTENT_SEL",
		0x117c575,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_HTMSC_MODE_SYNC_STAMP_FORCE",
		0x3ad5ca0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_HTMSC_MODE_WRITETOIO",
		0xdb283e0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NHTM_TRACE_TYPE",
		0x85fcda1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NOMINAL_FREQ_MHZ",
		0x4e64981,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NO_RECONFIG_ON_DECONFIG",
		0xefb989b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NO_XSCOM_ENFORCEMENT",
		0x2eda5ab,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NPU_MMIO_BAR_BASE_ADDR",
		0xff18a73,
		sizeof(uint64_t),
		{ 4, 2, 1, 1 } 
	},
	{
		"ATTR_NPU_MMIO_BAR_SIZE",
		0x77da343,
		sizeof(uint64_t),
		{ 4, 2, 1, 1 } 
	},
	{
		"ATTR_NUM_KEY_ADDR_PAIR",
		0x29bcc00,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NVDIMM_AUTO_ARM",
		0x8ca929b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NVDIMM_ENCRYPTION_ENABLE",
		0xe83f987,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_NVDIMM_ENCRYPTION_KEYS_ANCHOR",
		0x8452e3a,
		sizeof(uint8_t),
		{ 96, 1, 1, 1 } 
	},
	{
		"ATTR_NVDIMM_ENCRYPTION_KEYS_FW",
		0xbdb2233,
		sizeof(uint8_t),
		{ 96, 1, 1, 1 } 
	},
	{
		"ATTR_NV_OPS_TIMEOUT_MSEC",
		0x19f4158,
		sizeof(uint32_t),
		{ 6, 1, 1, 1 } 
	},
	{
		"ATTR_NV_STATUS_FLAG",
		0x21d59a2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OBUS_BRICK_LANE_MASK",
		0x2d9433b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OBUS_SLOT_INDEX",
		0xc610fe3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCC_LFIRMASK",
		0x8d614de,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCC_MASTER_CAPABLE",
		0xe7e15a5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCC_MIN_FREQ_MHZ",
		0xaf2e876,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCC_START_DISABLE",
		0x0e05a7c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_BOOT_FLAGS",
		0x3ddbd96,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_BOOT_SIDE",
		0xa5113fc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_CODE_UPDATED",
		0x565ee7d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_COUNTER",
		0x6c8bf3d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_FORCE_IMAGE_SYNC",
		0xbdbbd24,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_FW_UPDATE_OVERRIDE",
		0xab4c632,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_GOLDEN_BOOT_ATTEMPTED",
		0x0d7122c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_IGNORE_SCOM_CHECK_DISABLE",
		0xb8cb525,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_ISTEP_MODE",
		0x59d7ace,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_PLL_BUCKET",
		0xe862fae,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_PLL_BUCKET_SIM",
		0x1b37f43,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_REL_POS",
		0x35d5e3f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCMB_RESET_DELAY_SEC",
		0x829c075,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCS_ENABLED",
		0xb22f067,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OCS_WITH_DDS_DISABLE",
		0x2fc08c0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODYSSEY_PRIORITY_CODE_UPDATE_RULE",
		0x97999e4,
		sizeof(uint64_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ACTAG_BASE",
		0x5910d31,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ADV_TRAIN_OPT",
		0xa12ad5c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_AFU_ACTAG_LEN",
		0x7e6967a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ALERT_RECOV_ENABLE",
		0x48dfadb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_D5MISC",
		0x404b923,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DFIPHYUPDCNT",
		0xfcea8b7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DFIPHYUPDRESP",
		0x0b347d3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DISABLE_DRAM_WITH_BAD_DQ0",
		0xada1fc2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DISABLE_PMU_ECC",
		0x22ecfb0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DIS_PTRINITCLR_TXTRACKING",
		0x2b1e162,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DMEM_FIRST_LOAD",
		0xfbef093,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_OSC_RUNTIME_SEL",
		0x17ca2c5,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_COUNT_SINCE_LAST_RECAL",
		0x5f877fa,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_COUNT_THRESHOLD",
		0xcb72894,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_FAILED",
		0xd36e7f1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_HALF_DIMM_TARGET",
		0xdbb83fc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_LOG",
		0xe0cbfed,
		sizeof(uint64_t),
		{ 24, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_MISSED_QUIESCE_COUNT",
		0xdfa0ab1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_PERIOD",
		0xded6f91,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_PERIOD_INIT",
		0xb436d4f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_RECAL_COUNT",
		0xaf60522,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_SUSPENDED",
		0x785ff65,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DQS_TRACKING_TEMP_THRESHOLD",
		0xcbf6008,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_ERROR_ON_FAILURE",
		0x434f057,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_FIR_CHECK_ENABLE",
		0x789ba7e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_FW_DATA_ADDR_OFFSET",
		0x5834bdd,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_FW_REVISION",
		0xc412634,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_INTERNAL_FW_REVISION0",
		0xbbd2eef,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_INTERNAL_FW_REVISION1",
		0xaf1aa7c,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_RECOVERY_ENABLE",
		0x0bbbf7b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_STEP_ENABLE",
		0xdadf803,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_DRAMINIT_VERBOSITY",
		0x12be307,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_MALERT_ASYNC",
		0x05cbd4d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_US_TMPL_1",
		0x326c7fd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_US_TMPL_5",
		0xc476bf6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_US_TMPL_9",
		0x0de7e70,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_US_TMPL_A",
		0xd94ff32,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_ENABLE_US_TMPL_B",
		0xce99337,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_EN_RXDQS_TRACKING",
		0x3f7b7e7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_EN_TDQS2DQ_TRACKING",
		0x65a01d5,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_IS_HIGHVDD",
		0x6266c59,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_LP2_PWRSAVINGS",
		0x3bb3b7a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0x3712d9f,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_MEM_THROTTLED_N_COMMANDS_PER_SLOT",
		0x46af527,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_METADATA_ENABLE",
		0xfacac31,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_MRR_ODT_TERM",
		0x0f4af00,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_MSG_BLOCK_DATA_SOURCE",
		0x948775e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_MSG_MISC",
		0x5ee2cf9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PASID_BASE",
		0x83a8012,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PASID_LEN",
		0xf33f29f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CALINTERVAL",
		0x210fee7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CALONCE",
		0x7c07477,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CA_DFE_TRAIN_OPTIONS",
		0x6fb6b11,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CA_TRAIN_OPTIONS",
		0x2da9fc2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CFG",
		0x6a08b4b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_CONFIG_OVERRIDE",
		0x285a024,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_DEBUG_TRAIN_OPTIONS",
		0xb089450,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_DFIMRL_MARGIN",
		0xadb2ae7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_DISABLED_DBYTE",
		0x2596df8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_ENABLED_DQ_CHA",
		0x0999272,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_ENABLED_DQ_CHB",
		0xd22cf5f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_MSTRCTRLMODE",
		0x103f0e0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_MSTRMAXREQTOACK",
		0x8a5e99e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_MSTRTRAIN_INTERVAL",
		0xee87648,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_RX2D_TRAIN_OPT",
		0x057bedc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_TX2D_DFE_MISC",
		0x52de0d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_TX2D_TRAIN_OPT",
		0x6a84e01,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PHY_USE_BROADCAST_MR",
		0x2cb2b25,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PLL_BYPASS_EN",
		0xfb84286,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PNOR_COMBINED_IMAGES_HASH",
		0xaa4ce6c,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_POWERDOWN_ANIBS",
		0x6fccada,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_PSRO",
		0xa8ec5ac,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_RST_RXTRK_STATE",
		0x04bf0c7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_RUNTIME_MEM_THROTTLED_N_COMMANDS_PER_PORT",
		0x2e988c0,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_RUNTIME_MEM_THROTTLED_N_COMMANDS_PER_SLOT",
		0xd9a9f4f,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_RX2D_DFE_MISC",
		0x8dc56b6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SENSOR_POLLING_PERIOD_MS",
		0xab67f8c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SENSOR_POLLING_PERIOD_MS_INIT",
		0xe94e26a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SENSOR_READ_FIRST_FAIL",
		0x10cd9ed,
		sizeof(uint8_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SEQUENCE_CTRL",
		0xa186078,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SETUP_SAFEMODE_THROTTLES",
		0x2543532,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SHRT_BACKOFF_TIMER",
		0xd820de6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TCASL_ADD",
		0x5297c70,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TCASL_OVERRIDE",
		0x726e42c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TDQS2DQ",
		0x9fae533,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TDQSCK",
		0x6b981a7,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TPDM",
		0x6942ee4,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SIM_TSTAOFF",
		0x9f8f049,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SPECIAL_OFFSET_VALUE",
		0xc03336d,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_SWIZZLE_DETECT_FAIL_VALUE",
		0x216a1a7,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_THERMAL_SENSOR_0_PREVIOUS_VALUE",
		0x5f4f64d,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_THERMAL_SENSOR_1_PREVIOUS_VALUE",
		0xddbc151,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_THERMAL_SENSOR_2_PREVIOUS_VALUE",
		0x6cd7f34,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_THERMAL_SENSOR_3_PREVIOUS_VALUE",
		0xaadf350,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_THERMAL_SENSOR_DIFF_PREVIOUS_VALUE",
		0xec80f7c,
		sizeof(int16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TMPL_0_PACING",
		0x3d6c66d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TMPL_1_PACING",
		0xb6d7403,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TMPL_5_PACING",
		0x8f2a29b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TMPL_9_PACING",
		0x7adbf9e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TMPL_B_PACING",
		0x93b353c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TX_IMPEDANCE_CTRL1",
		0xf41ef0a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_TX_IMPEDANCE_CTRL2",
		0xf693e4d,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_UPPERNIBBLE_OVERRIDE",
		0xdcc378b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_UPPERNIBBLE_TG",
		0xefa25a2,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_ODY_WL_ADJ",
		0x4eee267,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_BIST_DAC_TEST",
		0xc965d72,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_BIST_ESD_TEST",
		0x900fdc4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_BIST_TIMER",
		0x3332949,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_CHANNEL_FAIL_ACTION",
		0x89af58e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_CHANNEL_LENGTH",
		0x29bf0cb,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_CRC_DEBUG",
		0x6c0c2a9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_DL_GROUP_POS",
		0xa59d641,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_DL_NUM",
		0x38da24e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_DL_PREIPL_PRBS_TIME",
		0x42af08e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_EDPL",
		0x5b3b3c9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_FFE_POST_CURSOR",
		0x9c878db,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_FFE_PRE_CURSOR",
		0xaa4803f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_FFE_SETTINGS_COMMAND",
		0xcb9c4fa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_INBAND_BAR_BASE_ADDR_OFFSET",
		0xf0baf47,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_INBAND_BAR_ENABLE",
		0xe2457f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_REFCLOCK_SWIZZLE",
		0xe96da20,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_HORIZ_DATA_OFFSET",
		0x6902c81,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_HORIZ_EDGE_OFFSET",
		0xf5b42fe,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_LANES",
		0x75b3b6d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_LTEG",
		0x1e96f94,
		sizeof(int32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_LTEZ",
		0x4523b41,
		sizeof(int32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_RX_VERT_OFFSET",
		0xfc1f6d8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_SPREAD_SPECTRUM",
		0xbdb2023,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_TX_LANES",
		0xe81aec2,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_TX_POST",
		0xbc265b8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_TX_PRE1",
		0x48e4bf5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_TX_PRE2",
		0x355e81c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OMI_X4_DEGRADE_ACTION",
		0x6992256,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OPTICS_CONFIG_MODE",
		0xc0f898a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ORDINAL_ID",
		0xe2df671,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ORIG_FIR_SETTINGS_ACTION0",
		0x836d048,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ORIG_FIR_SETTINGS_ACTION1",
		0x9653ac9,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_OVERRIDE_FREQ_PROC_REFCLOCK",
		0x2a254db,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PAU_DPLL_BYPASS",
		0x8f2bd1d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PAYLOAD_BASE",
		0x020a135,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PAYLOAD_ENTRY",
		0x64b6d86,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PAYLOAD_IN_MIRROR_MEM",
		0x8c5fb5a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PAYLOAD_STARTED",
		0x549cb5b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PBAF_LFIRMASK",
		0xc2a8db1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PBAO_LFIRMASK",
		0x36ebdf0,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PBAX_BRDCST_ID_VECTOR",
		0x15c7694,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PBAX_CHIPID",
		0x7f199a1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PBAX_GROUPID",
		0x955e6b7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCI0_REFCLOCK_RCVR_TERM",
		0x4da870d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCI1_REFCLOCK_RCVR_TERM",
		0x0602310,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_32BIT_DMA_SIZE",
		0xe242d68,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_32BIT_MMIO_SIZE",
		0xb312257,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_64BIT_DMA_SIZE",
		0x7e1fa3b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_64BIT_MMIO_SIZE",
		0x9487ddb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_CAPABILITES",
		0x7f829da,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_NVME_CCIN",
		0xd4805eb,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCIE_NVME_PHB_CONFIG",
		0x90e81d5,
		sizeof(uint64_t),
		{ 2, 2, 1, 1 } 
	},
	{
		"ATTR_PCI_PLL_BUCKET",
		0x102dda7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PCI_REFCLOCK_RCVR_TERM",
		0x64e7e70,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PDW_TRACE_ENABLE",
		0x36b1670,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_IS_BIFURCATABLE",
		0xab70ca8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_HX_KEYWORD_DATA",
		0x43ba247,
		sizeof(uint8_t),
		{ 9, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_IOP_REVERSAL",
		0x97e0876,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_IOP_REVERSAL_BIFURCATED",
		0x3322938,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_IOP_REVERSAL_NON_BIFURCATED",
		0xebbaf50,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_IOP_SWAP_BIFURCATED",
		0x1d55f3f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_IOP_SWAP_NON_BIFURCATED",
		0x70406e6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_LANE_MASK_BIFURCATED",
		0xa258a52,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PEC_PCIE_LANE_MASK_NON_BIFURCATED",
		0x65a6fb3,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PERF_24x7_INVOCATION_TIME_MS",
		0xe226c94,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PERST_CONTROL_PIN_NUMBERS",
		0xe00ac20,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PG",
		0x49f38fe,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PGPE_BOOT_COPIER_IVPR_OFFSET",
		0x08b7922,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PGPE_HCODE_FUNCTION_ENABLE",
		0xbb90f0a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PGPE_PHANTOM_HALT_ENABLE",
		0x08f223c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PG_MVPD",
		0xf93274e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PG_SAVED",
		0xf1d0ed1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PHB_BASE_ADDRS",
		0xb6f0cd7,
		sizeof(uint64_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PHY_GET_MAIL_TIMEOUT",
		0x3952eeb,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PIB_I2C_NEST_PLL",
		0x19a4504,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PIB_I2C_REFCLOCK",
		0xa8b10e1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PLCK_IPL_ATTR_OVERRIDES_EXIST",
		0xba4cb42,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PLL_BUCKET_BUILD_INDEX",
		0x724e782,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PMCR_MOST_RECENT_MODE",
		0x55bf804,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PMIC_CALLBACK_STAGGER_TIME",
		0x2763107,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PMIC_HEALTH_CHECK_DDR5_TIMER",
		0x5097420,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PMIC_HEALTH_CHECK_TIMER",
		0xb57d3ee,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_FIRINIT_DONE_ONCE_FLAG",
		0x4851132,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_GLOBAL_FIR_TRACE_EN",
		0xc315c52,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_HALT_FFDC_ENABLE",
		0xdcf9224,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_MALF_ALERT_ENABLE",
		0xa3a830c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_MALF_CYCLE",
		0x8b6b012,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_RESET_FFDC_ENABLE",
		0x9bb1f90,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_RESTART_PHASE",
		0xed1a955,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_CLOCK_DIVIDER",
		0x16824ac,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_CLOCK_PHASE",
		0x82b807e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_CLOCK_POLARITY",
		0x0241bf2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_FRAME_SIZE",
		0xb69562d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_INTER_FRAME_DELAY_SETTING",
		0x3e336e0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPIPSS_IN_DELAY",
		0xae84e31,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PM_SPWUP_IGNORE_XSTOP_FLAG",
		0x4c1219d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PNOR_FLASH_WORKAROUNDS",
		0x30c07c8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POSITION",
		0x90b4ba7,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POS_ON_MEM_PORT",
		0xf0961f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POUNDV_BUCKET_NUM",
		0x8d7f254,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POUNDV_BUCKET_NUM_OVERRIDE",
		0x59b35d5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POUND_V_STATIC_DATA_ENABLE",
		0x7959bae,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POUND_W_STATIC_DATA_ENABLE",
		0xa24c56a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POWERSAVE_FREQ_MHZ",
		0x470d34f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_POWERVS_P10_FW_VER",
		0xea0b51a,
		sizeof(uint8_t),
		{ 3, 3, 1, 1 } 
	},
	{
		"ATTR_PRD_DD1_OMI_DEGRADE_PREDICTIVE",
		0x214b9d8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PRD_HWP_PLID",
		0x38a7b13,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PREHEAT_PERCENT",
		0xa2ab303,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PRIMARY_MEASUREMENT_SEEPROM_FAIL_COUNT",
		0xe551d52,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PRIMARY_SEEPROM_FAIL_COUNT",
		0x2d75431,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PRIORITY_PSI_LINK_SELECTION",
		0x4d9c040,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_CHIP_IPL_PHASE",
		0x84844ff,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_CHTM_BAR_BASE_ADDR",
		0xf42d558,
		sizeof(uint64_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_CHTM_BAR_SIZES",
		0x4479a4c,
		sizeof(uint64_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_DCM_INSTALLED",
		0x2b8d151,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_DPLL_DIVIDER",
		0xde419d0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_DSTLCFG_MMIO_ADDRBIT_POS",
		0x5665717,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EFF_FABRIC_CHIP_ID",
		0xb91f5de,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EFF_FABRIC_GROUP_ID",
		0xbb5d3e9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_ENABLE_DL_TMPL_1",
		0x0dddcbc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_ENABLE_DL_TMPL_4",
		0xcd7be76,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_ENABLE_DL_TMPL_7",
		0xe80bb76,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_ENABLE_DL_TMPL_A",
		0x62e9ef2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_GB_PERCENTAGE",
		0x29081fa,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_READ_CYCLES_T0",
		0x21049e0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_READ_CYCLES_T1",
		0x4bf64b9,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_READ_CYCLES_T2",
		0xa78e807,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_TABLE_TYPE",
		0x23c87d8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_WRITE_CYCLES_T1",
		0x948370e,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_EPS_WRITE_CYCLES_T2",
		0xf104f67,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_ASYNC_MODE",
		0x421ef26,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_ADDR_DIS",
		0xa9a7c39,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_AGGREGATE",
		0x23ad20f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_ATTACHED_CHIP_CNFG",
		0x9db3e24,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_ATTACHED_CHIP_ID",
		0x5f943d0,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_ATTACHED_LINK_ID",
		0x36e454b,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_ATTACHED_TOPOLOGY_ID",
		0x76d2e17,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_INDIRECT",
		0x03ec4a4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_LINKS_CNFG",
		0x87ff43a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_A_LINK_DELAY",
		0xc0bb633,
		sizeof(uint32_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_BROADCAST_MODE",
		0xa5a748f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_CORE_FREQ_RATIO",
		0xd84795a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_DLR_PSAVE_MODE",
		0x2eccc49,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_EFF_TOPOLOGY_ID",
		0x482b817,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_GROUP_MASTER_CHIP",
		0xa2c9bd2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_IOHS_BUS_WIDTH",
		0x17f1548,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_LINK_ACTIVE",
		0x00116c3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_LINK_TOPOLOGY_ID_TABLE",
		0xe2328b9,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_PRESENT_GROUPS",
		0x3883186,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_R_INDIRECT_EN",
		0x56ff0f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_SL_DOMAIN",
		0x91b6902,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_SYSTEM_MASTER_CHIP",
		0xe831572,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_TOPOLOGY_ID",
		0xf24fe73,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE",
		0xd6af0b6,
		sizeof(uint8_t),
		{ 32, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_TOPOLOGY_MODE",
		0x0432b91,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_TSNOOP",
		0x9e66e24,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_ADDR_DIS",
		0x1f2c617,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_AGGREGATE",
		0xeada36c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_ATTACHED_CHIP_CNFG",
		0x0d40743,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_ATTACHED_CHIP_ID",
		0xa96afb3,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_ATTACHED_LINK_ID",
		0x56be955,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_ATTACHED_TOPOLOGY_ID",
		0xf033211,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_LINKS_CNFG",
		0x6704d48,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FABRIC_X_LINK_DELAY",
		0xd60cf0a,
		sizeof(uint32_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FAVOR_AGGRESSIVE_PREFETCH",
		0x55ddfeb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FORCE_MC_PLL_BANDSEL",
		0xaa74969,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FSP_BAR_BASE_ADDR_OFFSET",
		0xe3352f1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FSP_BAR_ENABLE",
		0x8f1af9c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FSP_BAR_SIZE",
		0xf8dd85b,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_FSP_MMIO_MASK_SIZE",
		0xbcf856d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_HW_TOPOLOGY",
		0xa0bf6f9,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_IC_BAR_BASE_ADDR_OFFSET",
		0xe6a19c7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_IC_BAR_ENABLE",
		0x8cc8333,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_IC_BAR_PAGE_SIZE",
		0x06716dc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVC_BAR_BASE_ADDR_OFFSET",
		0x18ba600,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVC_BAR_ENABLE",
		0x0f7ac8a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVC_BAR_PAGE_SIZE",
		0xc658f74,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVC_BAR_RANGE",
		0x570ac35,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVC_BAR_SET_DIVISION_SELECTOR",
		0xb25cde0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVPG_BAR_BASE_ADDR_OFFSET",
		0xb9270af,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVPG_BAR_ENABLE",
		0x617e775,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVPG_BAR_PAGE_SIZE",
		0xeb1a81f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVPG_BAR_RANGE",
		0x343de3b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_NVPG_BAR_SET_DIVISION_SELECTOR",
		0xbbb7d6f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_TM_BAR_BASE_ADDR_OFFSET",
		0xa543693,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_TM_BAR_ENABLE",
		0x6ba66f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_INT_TM_BAR_PAGE_SIZE",
		0x59d033d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_L2_HASH_DISABLE",
		0xcfd9488,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_L3_HASH_DISABLE",
		0xba10231,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_MODE_DISABLE",
		0xe444f3b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_MODE_SETUP",
		0x5d59877,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_MODE_SETUP_ADAPTIVE_D",
		0x8f50763,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_MODE_SETUP_ADAPTIVE_N",
		0x6237f69,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_TARGETS_COUNT",
		0xf88f412,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_TARGETS_MIN",
		0xa56649e,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LCO_TARGETS_VECTOR",
		0xb069fed,
		sizeof(uint32_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_LPC_BAR_BASE_ADDR_OFFSET",
		0x57ab3c7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MASTER_TYPE",
		0x68e1db7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MC_PLL_BANDSEL_OVERRIDE",
		0xd7aa47b,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MEMORY_ENCRYPTION_ENABLED",
		0xdee8fd0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MEM_BASES",
		0x3849826,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MEM_BASES_ACK",
		0x89b8414,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MEM_SIZES",
		0x61d7f4f,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MEM_SIZES_ACK",
		0xc3e64a1,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MIRROR_BASES",
		0xb9ee432,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MIRROR_BASES_ACK",
		0xb28a4f5,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MIRROR_SIZES",
		0x18128bb,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_MIRROR_SIZES_ACK",
		0x4d787f5,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NHTM_BAR_BASE_ADDR",
		0xb65b981,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NHTM_BAR_SIZE",
		0xc4941e4,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NX_RNG_BAR_BASE_ADDR_OFFSET",
		0x037feec,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NX_RNG_BAR_ENABLE",
		0x928d6c3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NX_RNG_FAILED_INT_ADDR",
		0xeb5a690,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_NX_RNG_FAILED_INT_ENABLE",
		0x6234fc5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_OCC_SANDBOX_BASE_ADDR",
		0x14625e7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_OCC_SANDBOX_SIZE",
		0x9f3cbef,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_OMI_OC_MAJOR_VER",
		0xf77c444,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_OMI_OC_MINOR_VER",
		0xebb5b0c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PAU_MMIO_BAR_BASE_ADDR_OFFSET",
		0x3351ea6,
		sizeof(uint64_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PAU_MMIO_BAR_ENABLE",
		0x8188de0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_BAR_ENABLE",
		0xc03d18e,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_BAR_SIZE",
		0x6a37320,
		sizeof(uint64_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_CACHE_INJ_MODE",
		0xa3e1a5f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_CARD_WORKAROUND",
		0x097b409,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_FW_VERSION_0",
		0x84bd9ba,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_FW_VERSION_1",
		0xb397e66,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_IOP_CONFIG",
		0xeb604df,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_IOVALID_ENABLE",
		0x48a8902,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_IS_SLOT",
		0x69653af,
		sizeof(uint8_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_EQUALIZATION_GEN3",
		0x4b839c0,
		sizeof(uint16_t),
		{ 16, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_EQUALIZATION_GEN4",
		0xdab5f58,
		sizeof(uint16_t),
		{ 16, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_EQUALIZATION_GEN5",
		0x1c05310,
		sizeof(uint16_t),
		{ 16, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_MASK",
		0x1439e9f,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_REVERSAL",
		0x025b084,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_LANE_REVERSAL_BASE",
		0xcc9dffd,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_MMIO_BAR0_BASE_ADDR_OFFSET",
		0x998757c,
		sizeof(uint64_t),
		{ 6, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_MMIO_BAR1_BASE_ADDR_OFFSET",
		0x637e6da,
		sizeof(uint64_t),
		{ 6, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_NUM_PEC",
		0xd837641,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PCS_RX_LOFF_CONTROL",
		0xa10bfc8,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PCS_RX_PHASE_ROTATOR_CNTL",
		0xc4fcb9a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PCS_RX_SIGDET_CNTL",
		0xf2039e4,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PCS_RX_VGA_CONTRL_REGISTER3",
		0xae3040d,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PHB_ACTIVE",
		0x763e8c5,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PHB_ACTIVE_BASE",
		0x5d3796a,
		sizeof(uint8_t),
		{ 3, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_PHB_REGISTER_BASE_ADDR_OFFSET",
		0xc2fdc31,
		sizeof(uint64_t),
		{ 6, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PCIE_REFCLOCK_ENABLE",
		0xe2cfa5e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PSI_BRIDGE_BAR_BASE_ADDR_OFFSET",
		0x206be4b,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_PSI_BRIDGE_BAR_ENABLE",
		0x8883a11,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_REFCLOCK_RCVR_TERM",
		0x5f9ce72,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_R_DISTLOSS_UOHM",
		0x4c51a2e,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_R_LOADLINE_UOHM",
		0x9cb426e,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SBE_MASTER_CHIP",
		0x4c42b9b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SBE_MCS_SETUP_REG_STATES",
		0x1ef2a04,
		sizeof(uint64_t),
		{ 9, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SBE_MCS_SETUP_SELECTED_MC",
		0x6c26bcb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SELECT_BOOT_SEEPROM_IMAGE",
		0xdba3bba,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SELECT_CLOCK_MUX_MODE",
		0x74974ba,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SELECT_SEEPROM_IMAGE",
		0x36ac7a5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SLEEP_WINKLE_LID_ID",
		0xbcdda58,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SMF_BAR_BASE_ADDR",
		0xf036277,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_SMF_BAR_SIZE",
		0xa8672bd,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_TMPL_0_PACING",
		0x0496af4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_TMPL_1_PACING",
		0x347b055,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_TMPL_4_PACING",
		0xdf66855,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_TMPL_7_PACING",
		0x078d31b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_TMPL_A_PACING",
		0xf9ab3cb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_VRM_VOFFSET_UV",
		0xdbfb744,
		sizeof(uint32_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_PROC_XSCOM_BAR_BASE_ADDR_OFFSET",
		0x3fe9f90,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PSI_BRIDGE_BASE_ADDR",
		0x6508321,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PSI_HB_ESB_ADDR",
		0x4e64812,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PSTATES_ENABLED",
		0xa3a4736,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_PVR_82_MODE",
		0x9599693,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_BOOT_CONTROL",
		0xc7deda5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_BROADSIDE_SCAN",
		0xd0ddacf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_HCODE_BLOCK_COUNT",
		0xca985e0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_HCODE_OFFSET",
		0x3b80bcf,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_LFIRMASK",
		0x9209ebe,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_STATE_LOSS_CORES",
		0xce16d63,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_QME_STOP_PHANTOM_HALT_ENABLE",
		0xc95df70,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCD_PARITY_RECONFIG_LOOPS_ALLOWED",
		0x3d1a60f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCD_PARITY_RECONFIG_LOOP_COUNT",
		0x5b0d3bc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW00_CHA_D0",
		0x44451f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW00_CHA_D1",
		0xd7ed561,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW00_CHB_D0",
		0x913e3f3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW00_CHB_D1",
		0x762c08b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW01_CHA_D0",
		0xb3b1e66,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW01_CHA_D1",
		0x0577bb4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW01_CHB_D0",
		0x4b65c7e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW01_CHB_D1",
		0xec7753d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW05_CHA_D0",
		0x7249ab4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW05_CHA_D1",
		0xad8dd9f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW05_CHB_D0",
		0xd304550,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW05_CHB_D1",
		0x174a2ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW08_CHA_D0",
		0xf169a2b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW08_CHA_D1",
		0xdf28a49,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW08_CHB_D0",
		0x4c3b83c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW08_CHB_D1",
		0x999e613,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW09_CHA_D0",
		0x34e5f5b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW09_CHA_D1",
		0xaf7ed15,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW09_CHB_D0",
		0xe63e435,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW09_CHB_D1",
		0xd07262c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0A_CHA_D0",
		0x47770b9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0A_CHA_D1",
		0xaf0a215,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0A_CHB_D0",
		0xed8a03a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0A_CHB_D1",
		0xdb3e968,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0C_CHA_D0",
		0x4cb206d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0C_CHA_D1",
		0x52aba1a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0C_CHB_D0",
		0x7b5c8b8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0C_CHB_D1",
		0xec66ecd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0D_CHA_D0",
		0x5450c2f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0D_CHA_D1",
		0x24dbd79,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0D_CHB_D0",
		0xbfa8f5f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0D_CHB_D1",
		0xaa8cfef,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0E_CHA_D0",
		0x6937db7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0E_CHA_D1",
		0xda1809c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0E_CHB_D0",
		0xb3d7076,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0E_CHB_D1",
		0x7fffb1b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0F_CHA_D0",
		0x3e10c4b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0F_CHA_D1",
		0x033b23b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0F_CHB_D0",
		0x7f0a438,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW0F_CHB_D1",
		0x2751df0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW40_CHA_D0",
		0xc11d96f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW40_CHA_D1",
		0x90b16d2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW40_CHB_D0",
		0x5ced586,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW40_CHB_D1",
		0x0a9ad3f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW41_CHA_D0",
		0xe3db688,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW41_CHA_D1",
		0xe9c4920,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW41_CHB_D0",
		0x9b2f9cf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW41_CHB_D1",
		0x1e33fa9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW42_CHA_D0",
		0x9dd54f3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW42_CHA_D1",
		0x21371e3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW42_CHB_D0",
		0x68c895f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW42_CHB_D1",
		0x683ae9e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW43_CHA_D0",
		0xed9fafb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW43_CHA_D1",
		0x671128a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW43_CHB_D0",
		0x9ce2145,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW43_CHB_D1",
		0x6485e5d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW44_CHA_D0",
		0xca20b66,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW44_CHA_D1",
		0x18ee29e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW44_CHB_D0",
		0x81d308e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW44_CHB_D1",
		0x392c87c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW45_CHA_D0",
		0x2af1514,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW45_CHA_D1",
		0xf9e5235,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW45_CHB_D0",
		0xd0b06da,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW45_CHB_D1",
		0x446e9d5,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW46_CHA_D0",
		0x42aac82,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW46_CHA_D1",
		0x5d2467e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW46_CHB_D0",
		0x77ae7b1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW46_CHB_D1",
		0xf84a889,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW47_CHA_D0",
		0xc2163fb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW47_CHA_D1",
		0x9711cca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW47_CHB_D0",
		0x0a708ad,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW47_CHB_D1",
		0xde00084,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW48_CHA_D0",
		0xa799fe9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW48_CHA_D1",
		0xdf5ac38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW48_CHB_D0",
		0xea75a30,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW48_CHB_D1",
		0x3e06229,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW49_CHA_D0",
		0xe79bdaf,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW49_CHA_D1",
		0x63d094c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW49_CHB_D0",
		0xeb40b74,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RCW49_CHB_D1",
		0x2ff4978,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RECONFIGURE_LOOP",
		0x1b589a0,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RECONFIG_LOOP_TESTS",
		0x4fe6548,
		sizeof(uint64_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_RECONFIG_LOOP_TESTS_ENABLE",
		0x97d43be,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_REDUNDANT_CLOCKS",
		0x706e27b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_REL_POS",
		0x30c46b3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_REPLACED_BY_SPARE",
		0xb8b3f00,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_REQUIRED_SYNCH_MODE",
		0x83fe364,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RESCLK_ENABLED",
		0xaa9080d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RESOURCE_IS_CRITICAL",
		0xbfccf0c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RESUME_PAYLOAD",
		0x53f3625,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RID",
		0xa628606,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RISK_LEVEL",
		0xb3adef2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RNG_BAR_SIZE",
		0xe2bf285,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RNG_BASE_ADDR",
		0xafef4d7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ROW_REPAIR_SUPPORTED_MRW",
		0x6809efd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RTG_SCAN_ORDER",
		0xe712112,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RT_DECONFIG_FAILED",
		0xb0b1979,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_CHIP_CYCLE_OFFSET",
		0xeb223ec,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_CORE_CYCLE_OFFSET",
		0x9b073da,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_CORE_SEED_SELECT",
		0xad742c1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_CYCLE_COUNT",
		0x13cd0a9,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_DO_CONFIG_CHECKS",
		0xaf0dc82,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_MASTER_SEED",
		0x4222d51,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_MODE",
		0x71527f3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_QUAD_CYCLE_OFFSET",
		0x0220177,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_SRESET_THREADS_BVEC",
		0x832a26f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_STAGGER_DELAY",
		0x87e3ed0,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_STOP_ON_XSTOP",
		0x12b0629,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_THREAD_SEEDS",
		0x484fa88,
		sizeof(uint64_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_RUNN_USE_QME_TIMEBASE",
		0xf9f4fcc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUN_MAX_MEM_PATTERNS",
		0x778bcbb,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RUN_ODY_HWP_FROM_HOST",
		0xfff38c9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RVRM_DEADZONE_MV",
		0x5e154c1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RVRM_ENABLED",
		0xe992285,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_RVRM_VID",
		0x68b9d58,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SADDLEBACK_VRM_ROLLOVER_ENABLE",
		0x4ebab49,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAFE_MODE_FREQUENCY_MHZ",
		0x39691ca,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAFE_MODE_NODDS_UPLIFT_0P5PCT",
		0xa6a5da4,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_SAFE_MODE_THROTTLE_IDX",
		0x37796c6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAFE_MODE_VOLTAGE_MV",
		0xad63b90,
		sizeof(uint32_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_SAFE_MODE_XSTOP",
		0xf796610,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAVED_DLP_FIR_MASK",
		0x32cec3d,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAVED_PB_PTL_FIR_MASK",
		0x93e688d,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SAVED_STATE_UINT8",
		0xc462253,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_ADDR_KEY_STASH_ADDR",
		0x8fc28b1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_BOOTLOADER_CODELEVEL",
		0x03a7dcf,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_BOOTLOADER_OFFSET",
		0x260fed1,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_BOOT_SIDE",
		0xcd1457b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_COMMIT_ID",
		0xe63aed7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_CUST_FORCE_MVPD_ONLY",
		0xf991bc4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_FIFO_CAPABILITIES",
		0x63a4fd4,
		sizeof(uint32_t),
		{ 40, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_HANDLES_SMP_TPM_EXTEND",
		0xd7735da,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_HBBL_EXCEPTION_INSTRUCT",
		0xaa3176d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_HW_KEY_HASH_ADDR",
		0x806e2cd,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_IMAGE_MINIMUM_VALID_ECS",
		0xba8abbe,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_IS_STARTED",
		0xe926ea8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_LOAD_BOOTLOADER_CHUNK_OFFSET",
		0xea3d478,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_LOAD_BOOTLOADER_HBBL_SIZE",
		0xc4d3c24,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_MASTER_HRMOR_ADDRESS",
		0x56cd34f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_MEASUREMENT_SEEPROM_VERSION",
		0x2dc6337,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_MINIMUM_SECURE_VERSION",
		0xff6c8c6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_NUM_CAPABILITIES",
		0xc8c5949,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_NUM_IMAGES",
		0xc7b1e3f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_RUNTIME_CODELEVEL",
		0xd5dfc35,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_RUNTIME_MODE",
		0xbeb4dd6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_SECURE_BOOT_MODE",
		0x2641d60,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_SELECT_EX_POLICY",
		0x96ed273,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_SYS_CONFIG",
		0xf64aeb7,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_UPDATE",
		0xd6f5f46,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_UPDATE_DISABLE",
		0x2b23c7c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SBE_VERSION_INFO",
		0xe20c541,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCAN0_SCAN_RATIO",
		0xd55e4f9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCANRING_FACTORY_PTR",
		0x053231c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCAN_CHIPLET_OVERRIDE",
		0xe802bb9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT32_1",
		0x782c053,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT32_2",
		0x002156b,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT64_1",
		0xeee9926,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT64_2",
		0x18a17a2,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT8_1",
		0xc7bc372,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SCRATCH_UINT8_2",
		0xe93419a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECONDARY_MEASUREMENT_SEEPROM_FAIL_COUNT",
		0xbdccc4d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECONDARY_SEEPROM_FAIL_COUNT",
		0xb7b2c40,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECTOR_BUFFER_STRENGTH",
		0x9761e43,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECUREBOOT_PROTECT_DECONFIGURED_TPM",
		0x96f8bd3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURE_SETTINGS",
		0x0dfd293,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURE_VERSION_LOCKIN_POLICY",
		0x335e006,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURE_VERSION_NUM",
		0x85a4a4b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURE_VERSION_SEEPROM",
		0xf9eeb51,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURITY_ENABLE",
		0x92913ca,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SECURITY_LEVEL",
		0x4362604,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SIM_CHIPLET_MASK",
		0xbe4e0de,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKEWADJ_BYPASS",
		0x91dcae8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKEWADJ_CACHE_PDLY_OVERRIDE",
		0x31a8e4b,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKEWADJ_CORE_PDLY_OVERRIDE",
		0x84b3cfb,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKIP_HBRT_ATTR_UPDATE",
		0x24a8d09,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKIP_HW_VREF_CAL",
		0xd8add56,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKIP_RD_VREF_VREFSENSE_OVERRIDE",
		0x4068890,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SKIP_WAKEUP",
		0x6381afd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SLOT_INDEX",
		0x51cc341,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SLOT_NAME",
		0x5ef37d7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SLOW_MEM_POOL_TEST",
		0x62195c1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SLW_IN_CHECKSTOP",
		0x2ab342e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SMF_CONFIG",
		0x0056bc3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SMF_MEM_AMT_REQUESTED",
		0x58f9cb3,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SMP_CONNECTION_STATE",
		0x69c6484,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SOCKET_POWER_NOMINAL",
		0xe2ab0d2,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SOCKET_POWER_TURBO",
		0x8949e92,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPARE_CORES",
		0xe831adc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPARE_CORES_DEPLOYED",
		0xd282763,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPARE_CORE_ACTIONS_DISABLED",
		0xd29c2de,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPECIAL_WAKEUP_NEEDED",
		0xc1f79e8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPIPSS_FREQUENCY",
		0x9493ec3,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPIPSS_SELECT",
		0x588aed6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPI_BUS_DIV_REF",
		0x3df05de,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_BOOTLOADER_MEASUREMENT_HASH",
		0xab1f0d1,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_BOOT_SIDE",
		0x8804d03,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_I2C_DEV_ADDR",
		0xd9b9ad9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_I2C_ENGINE",
		0x841f53b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_I2C_MAX_RETRY_COUNT",
		0x8fec09a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_I2C_PORT",
		0xe1c520c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_RUNTIME_MEASUREMENT_HASH",
		0x9e4ee59,
		sizeof(uint8_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_SPPE_TARGET_STATE",
		0xb541170,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SRAM_WRITE_ASSIST_MV",
		0x577af13,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_START_MEM_ADDRESS_FOR_PAYLOAD_TCE_TOKEN",
		0x8dfa6d6,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_STOP5_DISABLE",
		0x0ddfd25,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_STOP_LEVELS_DISABLED",
		0xd463c27,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_STOP_LEVELS_SUPPORTED",
		0xfd41e04,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SUPPORTED_STOP_STATES",
		0xbc55176,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SUPPORTS_DYNAMIC_MEM_VOLT",
		0xf70279f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SW511706_CHECKSTOP_ON_GTE_LV1_HANG",
		0x0c8b64a,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYNC_BETWEEN_STEPS",
		0x3761a65,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS0_REFCLOCK_RCVR_TERM",
		0x4b2ea2d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS1_REFCLOCK_RCVR_TERM",
		0x7172b53,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_AUXILLARY_MODE",
		0x7cfd099,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_COMPAT_FREQ_MHZ",
		0x3a9b8a6,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_CONFIG_TYPE",
		0xbf86bc1,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_CORECACHE_DCADJ_DISABLE",
		0xe8e795c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_CORECACHE_SKEWADJ_DISABLE",
		0x655aa2b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_DDS_DISABLE",
		0x4871927,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_DDS_FREQ_ENABLE",
		0x2f4ac23,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_FMAX_ENABLE",
		0xf811b59,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_FUSED_CORE_PAIRED_DISABLE",
		0x0a96a60,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_IPL_PHASE",
		0x6a47337,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_IQ_VALIDATION_MODE",
		0x8997fc6,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_IVRM_DISABLE",
		0x2996256,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_MAX_OPERATING_FREQ_MHZ",
		0x0b391d7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_MMA_POWEROFF_DELAY_POWEROF2_MS",
		0xc687d1e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_MMA_POWEROFF_DISABLE",
		0x90885f2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_MMA_POWERON_DISABLE",
		0x219583a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_OCS_DISABLE",
		0x2efe391,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PDV_LAB_VALIDATION_MODE",
		0x977494c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PDV_TDP_CURRENT_LAB_VALIDATION_MODE",
		0x2e92774,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PDV_TDP_CURRENT_VALIDATION_MODE",
		0x2dc6458,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PDV_VALIDATION_MODE",
		0x4820f8b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PDW_VALIDATION_MODE",
		0xd099bb4,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PGPE_CURRENT_READ_DISABLE",
		0xf091dbc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_POUNDV_VALIDITY_HALT_DISABLE",
		0x5dd7e45,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PSTATE0_FREQ_MHZ",
		0x001189a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_PSTATES_MODE",
		0x8a7db83,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_RESCLK_DISABLE",
		0x1bc94b8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_RESCLK_ISTEP4_ENABLE",
		0x1ca5b41,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_RING_DBG_MODE",
		0x4028d5e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_RVRM_DISABLE",
		0xf949e3a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_SUSPEND_OCC_MODE",
		0x75576dc,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_THERMAL_RESISTANCE",
		0x9a1b903,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_THROTTLE_PSTATE_NUMBER_LIMIT",
		0x777f418,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_VDM_DISABLE",
		0x36ea053,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOF_DISABLE",
		0xd7e2c04,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOF_DISABLE_DIMENSION",
		0x56efb21,
		sizeof(uint8_t),
		{ 5, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOF_LAB_VALIDATION_MODE",
		0xb2bacb2,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOF_VALIDATION_MODE",
		0x0f373ad,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOV_DDS_CALIBRATION_ENABLE",
		0xaa99dde,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOV_OVERV_DISABLE",
		0xb93929e,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYSTEM_WOV_UNDERV_DISABLE",
		0x4d911fa,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_CLK_NE_TERMINATION_SITE",
		0x8467756,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_CLK_NE_TERMINATION_STRENGTH",
		0x68de0ff,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_DISABLE_HWFM",
		0x7bbb645,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_DISABLE_MCU_TIMEOUTS",
		0x6f26f00,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_ENABLE_MC_HW520600_X4CTR",
		0x309917b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_VFRT_STATIC_DATA_ENABLE",
		0xa41ce38,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_SYS_VRT_STATIC_DATA_ENABLE",
		0xfceb067,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TARGET_IS_SCOMMABLE",
		0x7014d18,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TARGET_SCOMABLE",
		0x6766dce,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TCE_START_TOKEN_FOR_HDAT",
		0x4194918,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TCE_START_TOKEN_FOR_PAYLOAD",
		0x8944726,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TEMP_LOL_ERR_CNT",
		0xe9fe5d3,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TEST_NEGATIVE_FCN",
		0x30cbc29,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_THREAD_COUNT",
		0x8ce790d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_THROTTLE_MODE",
		0xbc5137d,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_THROTTLE_TABLE_OVERRIDE",
		0x9ddd63b,
		sizeof(uint32_t),
		{ 64, 1, 1, 1 } 
	},
	{
		"ATTR_TIME_BASE",
		0x1192453,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TLB_DATA_ASSOC_SETS",
		0xfca622c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TLB_DATA_ENTRIES",
		0xfb5ce79,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TLB_INSTR_ASSOC_SETS",
		0x134fdb0,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TLB_INSTR_ENTRIES",
		0x436dd94,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TLB_RESERVE_SIZE",
		0xeb0420c,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TOD_CPU_DATA",
		0xfaa68ab,
		sizeof(uint8_t),
		{ 44, 1, 1, 1 } 
	},
	{
		"ATTR_TOD_ROLE",
		0x019e5ac,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TPM_ENABLED",
		0xcb749b3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TPM_POISONED",
		0xa74c8da,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TPM_REQUIRED",
		0xe79c887,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TPM_SPI_BUS_DIV",
		0x9d0a4a8,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TPM_UNUSABLE",
		0x3e2ad88,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_TURBO_FREQ_MHZ",
		0xc9c1f1a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_UCD_MFR_REVISION_OVERRIDE",
		0x62ad824,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ULTRA_TURBO_FREQ_MHZ",
		0xca2de0a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_UNSECURE_HOMER_ADDRESS",
		0xef63d66,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_UNSECURE_HOMER_SIZE",
		0x06e1416,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_UPDATE_SLW_SCOM_TO_PHYP",
		0x6b84338,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_USE_11S_SPD",
		0x2165e1d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_USE_PIPE_FIFO",
		0xbb36ec8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_USE_TCES_FOR_DMAS",
		0xbde3ab9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VCS_BOOT_VOLTAGE",
		0xa68e8ba,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VCS_ID",
		0x780a573,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDDR_ID",
		0x3dbc21a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDD_BOOT_VOLTAGE",
		0xbecf4b6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDD_ID",
		0x2a9cfd3,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDM_ENABLED",
		0xd2ee0c7,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDN_BOOT_VOLTAGE",
		0xa2fea8f,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDN_UPLIFT_MV",
		0x0d8a911,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VDN_VOLTAGE_MV",
		0x219028e,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VENDOR_ID",
		0x22d9035,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VIO_RAILS_NOT_POWERED",
		0x9166bde,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VIO_SET_POINT_MV",
		0xd7d9779,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VOLTAGE_EXT_BIAS",
		0x98fab6d,
		sizeof(int8_t),
		{ 2, 8, 1, 1 } 
	},
	{
		"ATTR_VOLTAGE_EXT_VDN_BIAS",
		0x9fc8b45,
		sizeof(int8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VPD_POWERSAVE_MIN_FREQ_MHZ",
		0x76ca9d6,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VPD_REC_NUM",
		0x03a8b72,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_VPP_ID",
		0xa5ccc9a,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOFBASE_FREQ_MHZ",
		0x7ce5ba8,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_ALTITUDE_TEMP_ADJUSTMENT",
		0xbfae9a6,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_DCCR_VALUE",
		0x3917523,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_DCM_TRACKING_ENABLE",
		0x75ef2a9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_ENABLED",
		0xca00099,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_ENABLE_FRATIO",
		0xa7a6601,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_ENABLE_VRATIO",
		0x58a7917,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_FLMR_VALUE",
		0x48c79e0,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_FMMR_VALUE",
		0xeda0efc,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_INDEX_SELECT",
		0xa95efea,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_IO_BASE_POWER_0P01W",
		0xef89eb6,
		sizeof(uint16_t),
		{ 4, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_IO_COUNT",
		0xf995f8c,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_IO_POWER_MODE",
		0x44a66ec,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_IO_START",
		0x63c5ad2,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_IO_STEP",
		0x07e49ed,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_OMI_FORCE_FREQ_MHZ",
		0x2ef58ce,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_PITCH_ENABLE",
		0xd7c305f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_POWER_LIMIT",
		0x4baf80d,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_IO_POWER_BASE_W",
		0x3d57633,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_LID_NUMBER",
		0xe1b47d7,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_FF",
		0xd53c70b,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_PS",
		0x3d086ed,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_RC",
		0x3be1427,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_SP",
		0x9133f91,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_UT",
		0x8f2e0ff,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TABLE_OVERRIDE_WB",
		0xaa89323,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TDP_ALTITUDE_REFERENCE_M",
		0x667e81e,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_TDP_IO_INDEX",
		0x6efcd46,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_THROTTLE_CONTROL_DISABLED",
		0x82f2d14,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_THROTTLE_CONTROL_KI",
		0x53beb18,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_THROTTLE_CONTROL_KP",
		0xc110745,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_THROTTLE_CONTROL_LOOP_DISABLE",
		0x72f4865,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_THROTTLE_CONTROL_LOOP_MODE",
		0x5e6c304,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_VRATIO_SELECT",
		0x93b8597,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_VRATIO_VCS_10THPCT",
		0x3519971,
		sizeof(uint16_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_WOF_VRATIO_VDD_10THPCT",
		0x79c2dd2,
		sizeof(uint16_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_DIRTY_UNCURRENT_CONTROL",
		0xe4e2b19,
		sizeof(uint8_t),
		{ 2, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_HEAVY_PERF_LOSS_THRESH_10THPCT",
		0xe3b1a88,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_LIGHT_PERF_LOSS_THRESH_10THPCT",
		0xed124b9,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_MAX_DROOP_10THPCT",
		0x58d355a,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_ENABLED",
		0x931031c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_EXTENDED_MAX_10THPCT",
		0x290257b,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_MAX_10THPCT",
		0x8be06f8,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_STEP_DECR_10THPCT",
		0xa85a352,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_STEP_INCR_10THPCT",
		0x1a4dca3,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_VMAX_SETPOINT_MV",
		0x3b1ed0d,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_OVERV_WITH_DDS_DISABLE",
		0xd56672f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_ENABLED",
		0x244f3e1,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_EXTENDED_MAX_10THPCT",
		0xf9d3311,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_MAX_10THPCT",
		0x668db70,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_STEP_DECR_10THPCT",
		0xabb5e9c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_STEP_INCR_10THPCT",
		0x95c569b,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WOV_UNDERV_VMIN_MV",
		0xa78eaae,
		sizeof(uint16_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_CORE_COUNT_INDEX",
		0xc6cf6dd,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_CORE_COUNT_INDEX_ARRAY",
		0xbbc3ceb,
		sizeof(uint8_t),
		{ 8, 1, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_EFFICIENCY_ALG",
		0x9e6ab5c,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_EFFICIENCY_CEFF_ADJUST",
		0x06668e3,
		sizeof(uint8_t),
		{ 8, 4, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_EFFICIENCY_FREQ_LIMITS",
		0x609c749,
		sizeof(uint16_t),
		{ 8, 4, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_EFFICIENCY_IDLE_THRESH",
		0x0dcd6cd,
		sizeof(uint16_t),
		{ 8, 2, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_EFFICIENCY_IDLE_TIMES",
		0x3c0bdfa,
		sizeof(uint16_t),
		{ 8, 2, 1, 1 } 
	},
	{
		"ATTR_WTH_OVERRIDE_TEST_CORE_COUNT",
		0xfe2fc3a,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_XGPE_BOOT_COPIER_IVPR_OFFSET",
		0x2fd62ba,
		sizeof(uint32_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_XGPE_PHANTOM_HALT_ENABLE",
		0x7405667,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_XIVE_CONTROLLER_BAR_ADDR",
		0x859437f,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_XSCOM_BASE_ADDRESS",
		0x7803464,
		sizeof(uint64_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_XSTOP_ON_SPATTN",
		0xcfcfb46,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
	{
		"ATTR_ZERO_CORE_CHIP",
		0x2afc21f,
		sizeof(uint8_t),
		{ 1, 1, 1, 1 } 
	},
};
