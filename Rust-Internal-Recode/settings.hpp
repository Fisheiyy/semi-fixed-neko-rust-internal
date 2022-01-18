#pragma once

namespace settings {
	namespace weapon {
		bool hitbox_override  = false;
		bool magic_bullet  = false;
		bool random_hitbox  = false;
		bool silent_melee = false;
		bool weapon_removals  = false;
		bool always_shoot  = false;
		bool psilent = false;
		bool thick_bullet = false;
		bool fast_bullet = false;
	}

	namespace visuals {
		bool player_esp = false;
		bool chams = false;
		bool misc_esp  = false;
		bool sleeper_esp  = false;
		bool heli_esp = false;
		bool npc_esp = false;
		bool dropped_items = false;
		bool stash = false;
		bool sulfur_ore = false;
		bool stone_ore = false;
		bool metal_ore = false;
		bool traps = false;
		bool vehicles = false;
		bool airdrops = false;
		bool cloth = false;
		bool corpses = false;
		bool tc_esp = false;
		bool raid_esp = false;
		bool hackable_crate_esp = false;
	}

	namespace misc {
		float    m_idebugcam_speed = 1.f;
		float code_lock_code = 1000;
		bool spinbot  = false;
		bool attack_on_mountables = false;
		bool speedhack = false;
		bool TakeFallDamage = false;
		bool silent_farm = false;
		bool auto_lock = false;
		bool always_sprint = false;
		bool gravity = false;
		bool infinite_jump = false;
		bool fake_lag = false;
		bool admin_mode = false;
		bool view_offset  = false;
		bool instant_med  = false;
		bool instant_revive = false;
		bool no_playercollision = false;
	}
}