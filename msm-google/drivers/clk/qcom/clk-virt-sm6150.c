/* Copyright (c) 2019, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include <linux/clk-provider.h>
#include <dt-bindings/clock/qcom,gcc-sm6150.h>
#include <dt-bindings/clock/qcom,scc-sm6150.h>
#include "clk-virt.h"

static struct virt_reset_map sm6150_gcc_virt_resets[] = {
	[GCC_QUSB2PHY_PRIM_BCR] = { "gcc_qusb2phy_prim_bcr" },
	[GCC_QUSB2PHY_SEC_BCR] = { "gcc_qusb2phy_sec_bcr" },
	[GCC_USB30_PRIM_BCR] = { "gcc_usb30_prim_master_clk" },
	[GCC_USB2_PHY_SEC_BCR] = { "gcc_usb2_phy_sec_bcr" },
	[GCC_USB3_DP_PHY_SEC_BCR] = { "gcc_usb3_dp_phy_sec_bcr" },
	[GCC_USB3PHY_PHY_SEC_BCR] = { "gcc_usb3phy_phy_sec_bcr" },
	[GCC_USB20_SEC_BCR] = { "gcc_usb20_sec_master_clk" },
	[GCC_USB3_PHY_PRIM_SP0_BCR] = { "gcc_usb3_phy_prim_sp0_bcr" },
	[GCC_USB3PHY_PHY_PRIM_SP0_BCR] = { "gcc_usb3phy_phy_prim_sp0_bcr" },
};

static struct clk_virt gcc_qupv3_wrap0_s0_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s0_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap0_s1_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s1_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap0_s2_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s2_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap0_s3_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s3_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap0_s4_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s4_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap0_s5_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap0_s5_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s0_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s0_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s1_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s1_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s2_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s2_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s3_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s3_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s4_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s4_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap1_s5_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap1_s5_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap_0_m_ahb_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap_0_m_ahb_clk",
	},
};

static struct clk_virt gcc_ahb2phy_west_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_ahb2phy_west_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap_0_s_ahb_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap_0_s_ahb_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap_1_m_ahb_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap_1_m_ahb_clk",
	},
};

static struct clk_virt gcc_qupv3_wrap_1_s_ahb_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_qupv3_wrap_1_s_ahb_clk",
	},
};

static struct clk_virt gcc_usb30_prim_master_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb30_prim_master_clk",
	},
};

static struct clk_virt gcc_cfg_noc_usb3_prim_axi_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_cfg_noc_usb3_prim_axi_clk",
	},
};

static struct clk_virt gcc_aggre_usb3_prim_axi_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_aggre_usb3_prim_axi_clk",
	},
};

static struct clk_virt gcc_usb30_prim_mock_utmi_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb30_prim_mock_utmi_clk",
	},
};

static struct clk_virt gcc_usb30_prim_sleep_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb30_prim_sleep_clk",
	},
};

static struct clk_virt gcc_usb3_sec_clkref_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb3_sec_clkref_en",
	},
};

static struct clk_virt gcc_usb3_prim_phy_aux_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb3_prim_phy_aux_clk",
	},
};

static struct clk_virt gcc_usb3_prim_phy_pipe_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb3_prim_phy_pipe_clk",
	},
};

static struct clk_virt gcc_usb3_prim_clkref_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb3_prim_clkref_en",
	},
};

static struct clk_virt gcc_usb3_prim_phy_com_aux_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "gcc_usb3_prim_phy_com_aux_clk",
	},
};

static struct clk_hw *sm6150_gcc_virt_clocks[] = {
	[GCC_QUPV3_WRAP0_S0_CLK] = &gcc_qupv3_wrap0_s0_clk.hw,
	[GCC_QUPV3_WRAP0_S1_CLK] = &gcc_qupv3_wrap0_s1_clk.hw,
	[GCC_QUPV3_WRAP0_S2_CLK] = &gcc_qupv3_wrap0_s2_clk.hw,
	[GCC_QUPV3_WRAP0_S3_CLK] = &gcc_qupv3_wrap0_s3_clk.hw,
	[GCC_QUPV3_WRAP0_S4_CLK] = &gcc_qupv3_wrap0_s4_clk.hw,
	[GCC_QUPV3_WRAP0_S5_CLK] = &gcc_qupv3_wrap0_s5_clk.hw,
	[GCC_QUPV3_WRAP1_S0_CLK] = &gcc_qupv3_wrap1_s0_clk.hw,
	[GCC_QUPV3_WRAP1_S1_CLK] = &gcc_qupv3_wrap1_s1_clk.hw,
	[GCC_QUPV3_WRAP1_S2_CLK] = &gcc_qupv3_wrap1_s2_clk.hw,
	[GCC_QUPV3_WRAP1_S3_CLK] = &gcc_qupv3_wrap1_s3_clk.hw,
	[GCC_QUPV3_WRAP1_S4_CLK] = &gcc_qupv3_wrap1_s4_clk.hw,
	[GCC_QUPV3_WRAP1_S5_CLK] = &gcc_qupv3_wrap1_s5_clk.hw,
	[GCC_QUPV3_WRAP_0_M_AHB_CLK] = &gcc_qupv3_wrap_0_m_ahb_clk.hw,
	[GCC_QUPV3_WRAP_0_S_AHB_CLK] = &gcc_qupv3_wrap_0_s_ahb_clk.hw,
	[GCC_QUPV3_WRAP_1_M_AHB_CLK] = &gcc_qupv3_wrap_1_m_ahb_clk.hw,
	[GCC_QUPV3_WRAP_1_S_AHB_CLK] = &gcc_qupv3_wrap_1_s_ahb_clk.hw,
	[GCC_USB30_PRIM_MASTER_CLK] = &gcc_usb30_prim_master_clk.hw,
	[GCC_CFG_NOC_USB3_PRIM_AXI_CLK] = &gcc_cfg_noc_usb3_prim_axi_clk.hw,
	[GCC_AGGRE_USB3_PRIM_AXI_CLK] = &gcc_aggre_usb3_prim_axi_clk.hw,
	[GCC_USB30_PRIM_MOCK_UTMI_CLK] = &gcc_usb30_prim_mock_utmi_clk.hw,
	[GCC_USB30_PRIM_SLEEP_CLK] = &gcc_usb30_prim_sleep_clk.hw,
	[GCC_USB3_SEC_CLKREF_CLK] = &gcc_usb3_sec_clkref_clk.hw,
	[GCC_USB3_PRIM_PHY_AUX_CLK] = &gcc_usb3_prim_phy_aux_clk.hw,
	[GCC_USB3_PRIM_PHY_PIPE_CLK] = &gcc_usb3_prim_phy_pipe_clk.hw,
	[GCC_USB3_PRIM_CLKREF_CLK] = &gcc_usb3_prim_clkref_clk.hw,
	[GCC_USB3_PRIM_PHY_COM_AUX_CLK] = &gcc_usb3_prim_phy_com_aux_clk.hw,
	[GCC_AHB2PHY_WEST_CLK] = &gcc_ahb2phy_west_clk.hw,
};

const struct clk_virt_desc clk_virt_sm6150_gcc = {
	.clks = sm6150_gcc_virt_clocks,
	.num_clks = ARRAY_SIZE(sm6150_gcc_virt_clocks),
	.resets = sm6150_gcc_virt_resets,
	.num_resets = ARRAY_SIZE(sm6150_gcc_virt_resets),
};

static struct clk_virt scc_qupv3_se0_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_se0_clk",
	},
};

static struct clk_virt scc_qupv3_se1_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_se1_clk",
	},
};

static struct clk_virt scc_qupv3_se2_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_se2_clk",
	},
};

static struct clk_virt scc_qupv3_se3_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_se3_clk",
	},
};

static struct clk_virt scc_qupv3_m_hclk_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_m_hclk_clk",
	},
};

static struct clk_virt scc_qupv3_s_hclk_clk = {
	.hw.init = &(struct clk_init_data) {
		.ops = &clk_virt_ops,
		.name = "scc_qupv3_s_hclk_clk",
	},
};

static struct clk_hw *sm6150_scc_virt_clocks[] = {
	[SCC_QUPV3_SE0_CLK] = &scc_qupv3_se0_clk.hw,
	[SCC_QUPV3_SE1_CLK] = &scc_qupv3_se1_clk.hw,
	[SCC_QUPV3_SE2_CLK] = &scc_qupv3_se2_clk.hw,
	[SCC_QUPV3_SE3_CLK] = &scc_qupv3_se3_clk.hw,
	[SCC_QUPV3_M_HCLK_CLK] = &scc_qupv3_m_hclk_clk.hw,
	[SCC_QUPV3_S_HCLK_CLK] = &scc_qupv3_s_hclk_clk.hw,
};

const struct clk_virt_desc clk_virt_sm6150_scc = {
	.clks = sm6150_scc_virt_clocks,
	.num_clks = ARRAY_SIZE(sm6150_scc_virt_clocks),
};
