/////////////////////////////////////////////////////////////////////////////////
#                                                                               #
#                                   ALiVE FILE                                  #
#                                                                               #
/////////////////////////////////////////////////////////////////////////////////
//                                                                             //
//               Copyright 2013 ALiVE MOD, ALL RIGHTS RESERVED                 //
//                                                                             //
//  This product is licensed for personal use only.  Commercial distribution   //
//  prohibited.  Military use prohibited.  Use prohibited if any component     //
//  of this distribution removed or modified without express written consent   //
//  of the developer. For further licensing details please refer to the End    //
//  User License Agreement provided within this PBO file. Any questions or     //
//  comments, please contact:                                    //
//                    http://alivemod.com/                    //
//                                                                             //
///////////////////////////////////////////////////////////////////////////////// 

#===========#
| Component |
#===========#

ALiVE_compatibility_gm

#================#
| Main author(s) |
#================#

ALiVE Team

#===============#
| Local credits |
#===============#

Jman

#=============================#
| Rough component description |
#=============================#

Contains object compatibility for Global Mobilization CDLC

#=================#
| Contact details |
#=================#

Page:    http://alivemod.com/



- This ALiVE addon component requires Global Mobilization CDLC Global Mobilization v1.5

- This ALiVE compatibility addon corrects the faction classes for Global Mobilization groups in cfgGroups.

- For the ALiVE CQB & Civilian Placement modules please use the default GM faction class outlined below.



ALiVE Military Close Quarters Battle (CQB) & Civilian Placement Modules

-------------------------------------------------------------
WEST (CQB)
-------------------------------------------------------------
West Germany                                  gm_fc_ge
West Germany (Borderguards)                   gm_fc_ge_bgs
Denmark                                       gm_fc_dk

-------------------------------------------------------------
EAST (CQB)
-------------------------------------------------------------
East Germany                                  gm_fc_gc
East Germany (Borderguards)                   gm_fc_gc_bgs
Poland                                        gm_fc_pl

-------------------------------------------------------------
INDEP (CQB)
-------------------------------------------------------------
Revolutionaries                               gm_fc_xx

-------------------------------------------------------------
CIV (CiV population)
-------------------------------------------------------------
West Germany Civilians                        gm_fc_ge_civ
East Germany Civilians                        gm_fc_gc_civ

- Please note: The respective winter CQB variants will automatically spawn on any terrain with the phrase 'winter' in it's title (worldName)



ALiVE Military Placement (Mil Obj) & Military Placement (Civ Obj) Modules

-------------------------------------------------------------
WEST (Military Placement)
-------------------------------------------------------------
West Germany                                  gm_ge_army
West Germany (Winter)                         gm_ge_army_win
West Germany (Borderguards)                   gm_ge_army_bgs
Denmark                                       gm_dk_army
Denmark (Winter)                              gm_dk_army_win

-------------------------------------------------------------
EAST (Military Placement)
-------------------------------------------------------------
East Germany                                  gm_gc_army
East Germany (Winter)                         gm_gc_army_win
East Germany (Borderguards)                   gm_pl_army
Poland                                        gm_pl_army
Poland (Winter)                               gm_pl_army_win

-------------------------------------------------------------
INDEP (Military Placement)
-------------------------------------------------------------
Revolutionaries                               gm_xx_army





- There now follows a list of the Global Mobilization Unit classnames

-------------------------------------------------------------
Global Mobilization v1.5 Unit Classnames
-------------------------------------------------------------


EAST GERMANY UNITS - WINTER & SUMMER (EAST)
-------------------------------------------------------------
Anti-Air

Fla-SFL 23-4V1					gm_gc_army_zsu234v1


APCs

BMP-1 SP-2							gm_gc_army_bmp1sp2
SPW-40P2								gm_gc_army_brdm2
SPW-40P2 (Ch)						gm_gc_army_brdm2rkh
SPW-40P2UM							gm_gc_army_brdm2um
SPW-60PA								gm_gc_army_btr60pa
SPW-60PA DShKM					gm_gc_army_btr60pa_dshkm
SPW-60PB								gm_gc_army_btr60pb
SPW-60PU-12							gm_gc_army_btr60pu12


Artillery

SR 2P16									gm_gc_army_2p16
SFL 2S1									gm_gc_army_2s1
GeW BM-21								gm_gc_army_ural375d_mlrs


Cars

P601 (Patrol)									gm_gc_army_p601
Pkw gel. 469									gm_gc_army_uaz469_cargo
Pkw gel. 469 SPG-9						gm_gc_army_uaz469_spg9
Pkw gel. 469 DShKM						gm_gc_army_uaz469_dshkm
Truck gel. 5 Repair						gm_gc_army_ural4320_repair
Truck gel. 5 Transport				gm_gc_army_ural4320_cargo
Truck gel. 5 Ammo							gm_gc_army_ural4320_reammo
Truck gel. 5 Tractor					gm_gc_army_ural44202
Truck gel. 5 Mp Fuel					gm_gc_army_ural375d_refuel
Truck gel. 5 Mp Medical				gm_gc_army_ural375d_medic
Truck gel. 5 Mp Transport			gm_gc_army_ural375d_cargo
Army Bicycle									gm_gc_army_bicycle_01_oli


Helicopters

Mi-2P						gm_gc_airforce_mi2p
Mi-2T						gm_gc_airforce_mi2t
Mi-2SR					gm_gc_airforce_mi2sr
Mi-2US					gm_gc_airforce_mi2us
Mi-2URN					gm_gc_airforce_mi2urn


Planes

L-410T					gm_gc_airforce_l410t
L-410S					gm_gc_airforce_l410s_salon


Tanks

PT-76B					gm_gc_army_pt76b
T-55						gm_gc_army_t55
T-55A						gm_gc_army_t55a
T-55AK					gm_gc_army_t55ak
T-55AM2					gm_gc_army_t55am2
T-55AM2B				gm_gc_army_t55am2b


Turrets

Fagot - Tripod		gm_gc_army_fagot_launcher_tripod
SPG-9 - Tripod		gm_gc_army_spg9_tripod
DShKM - Tripod		gm_gc_army_dshkm_aatripod


Men '80

Rifleman														gm_gc_army_rifleman_mpiak74n_80_str
Radioman														gm_gc_army_radioman_mpiak74n_80_str
Paratrooper													gm_gc_army_paratrooper_mpiaks74n_80_str
Medic																gm_gc_army_medic_mpiak74n_80_str
Light Machinegunner									gm_gc_army_machinegunner_lmgrpk_80_str
Light Machinegunner Assistant				gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk_80_str
Machinegunner												gm_gc_army_machinegunner_pk_80_str
Machinegunner Assistant							gm_gc_army_machinegunner_assistant_mpiak74n_pk_80_str
Light Anti-Tank											gm_gc_army_antitank_mpiak74n_rpg18_80_str
Anti-Tank														gm_gc_army_antitank_mpiak74n_rpg7_80_str
Anti-Tank Assistant									gm_gc_army_antitank_assistant_mpiak74n_rpg7_80_str
Anti-Air														gm_gc_army_antiair_mpiak74n_9k32m_80_str
ATGM Gunner													gm_gc_army_antitank_mpiak74n_fagot_80_str
Demolition													gm_gc_army_demolition_mpiaks74n_80_str
Pioneer															gm_gc_army_engineer_mpiaks74n_80_str
Marksman														gm_gc_army_marksman_svd_80_str			
Squad Leader												gm_gc_army_squadleader_mpiak74n_80_str
Crew																gm_gc_army_crew_mpiaks74nk_80_blk
Officer															gm_gc_army_officer_80_gry
Pilot																gm_gc_airforce_pilot_pm_80_blu


Special Forces, '80

Rifleman										gm_gc_army_sf_rifleman_mpikms72_80_str
Radioman										gm_gc_army_sf_radioman_mpikms72_80_str
Shock Trooper								gm_gc_army_sf_rifleman_pm63_80_str
Light Machinegunner					gm_gc_army_sf_machinegunner_lmgrpk_80_str
Light Anti-Tank							gm_gc_army_sf_antitank_mpikms72_rpg18_80_str
Anti-Tank										gm_gc_army_sf_antitank_mpikms72_rpg7_80_str
Anti-Air										gm_gc_army_sf_antiair_pm63_9k32m_80_str
ATGM Gunner									gm_gc_army_sf_antitank_mpikms72_fagot_80_str
Demolition									gm_gc_army_sf_demolition_pm63_80_str
Pioneer											gm_gc_army_sf_engineer_mpikms72_80_str
Marksman										gm_gc_army_sf_marksman_svd_80_str
Squad Leader								gm_gc_army_sf_squadleader_mpikms72_80_str


Men, '80 (Winter)

Rifleman														gm_gc_army_rifleman_mpiak74n_80_win
Radioman														gm_gc_army_radioman_mpiak74n_80_win
Paratrooper													gm_gc_army_paratrooper_mpiaks74n_80_win
Medic																gm_gc_army_medic_mpiak74n_80_win
Light Machinegunner									gm_gc_army_machinegunner_lmgrpk_80_win
Light Machinegunner Assistant				gm_gc_army_machinegunner_assistant_mpiak74n_lmgrpk_80_win
Machinegunner												gm_gc_army_machinegunner_pk_80_win
Machinegunner Assistant							gm_gc_army_machinegunner_assistant_mpiak74n_pk_80_win
Light Anti-Tank											gm_gc_army_antitank_mpiak74n_rpg18_80_win
Anti-Tank														gm_gc_army_antitank_mpiak74n_rpg7_80_win
Anti-Tank Assistant									gm_gc_army_antitank_assistant_mpiak74n_rpg7_80_win
Anti-Air														gm_gc_army_antiair_mpiak74n_9k32m_80_win
ATGM Gunner													gm_gc_army_antitank_mpiak74n_fagot_80_win
Demolition													gm_gc_army_demolition_mpiaks74n_80_win
Pioneer															gm_gc_army_engineer_mpiaks74n_80_win
Marksman														gm_gc_army_marksman_svd_80_win
Squad Leader												gm_gc_army_squadleader_mpiak74n_80_win
Officer															gm_gc_army_officer_pm_80_win


Special Forces, '80 (Winter)

Rifleman									gm_gc_army_sf_rifleman_mpikms72_80_win
Radioman									gm_gc_army_sf_radioman_mpikms72_80_win
Shock Trooper							gm_gc_army_sf_rifleman_pm63_80_win
Light Machinegunner				gm_gc_army_sf_machinegunner_lmgrpk_80_win
Light Anti-Tank						gm_gc_army_sf_antitank_mpikms72_rpg18_80_win
Anti-Tank									gm_gc_army_sf_antitank_mpikms72_rpg7_80_win
Anti-Air									gm_gc_army_sf_antiair_pm63_9k32m_80_win
ATGM Gunner								gm_gc_army_sf_antitank_mpikms72_fagot_80_win
Demolition								gm_gc_army_sf_demolition_pm63_80_win
Pioneer										gm_gc_army_sf_engineer_mpikms72_80_win
Marksman									gm_gc_army_sf_marksman_svd_80_win
Squad Leader							gm_gc_army_sf_squadleader_mpikms72_80_win



POLAND - WINTER & SUMMER (EAST)
-------------------------------------------------------------
Anti-Air

ZSU-23-4V1						gm_pl_army_zsu234v1


APCs

BWP-1									gm_pl_army_bmp1sp2
BRDM-2								gm_pl_army_brdm2
SKOT-2A								gm_pl_army_ot64a


Artillery

2P16					gm_pl_army_2p16
2S1						gm_pl_army_2s1
BM-21					gm_pl_army_ural375d_mlrs


Cars

Truck gel. 5 Repair									gm_pl_army_ural4320_repair
Truck gel. 5 Transport							gm_pl_army_ural4320_cargo
Truck gel. 5 Ammo										gm_pl_army_ural4320_reammo
UAZ 469															gm_pl_army_uaz469_cargo
UAZ 469 DShKM												gm_pl_army_uaz469_dshkm
Truck gel. 5 Mp Fuel								gm_pl_army_ural375d_refuel
Truck gel. 5 Mp Medical							gm_pl_army_ural375d_medic


Helicopters

Mi-2P							gm_pl_airforce_mi2p
Mi-2T							gm_pl_airforce_mi2t
Mi-2SR						gm_pl_airforce_mi2sr
Mi-2US						gm_pl_airforce_mi2us
Mi-2URN						gm_pl_airforce_mi2urn
Mi-2UR						gm_pl_airforce_mi2urp
Mi-2URS						gm_pl_airforce_mi2urs
Mi-2URP-G					gm_pl_airforce_mi2urpg
Mi-2Ch						gm_pl_airforce_mi2ch
Mi-2P Platan			gm_pl_airforce_mi2platan


Tanks

PT-76B				gm_pl_army_pt76b
T-55					gm_pl_army_t55
T-55a					gm_pl_army_t55a
T-55AD1				gm_pl_army_t55ak


Turrets

Fagot - Tripod			gm_pl_army_fagot_launcher_tripod
SPG-9 - Tripod			gm_pl_army_spg9_tripod
DShKM - Tripod			gm_pl_army_dshkm_aatripod


Men, '80'

Crew														gm_pl_army_crew_pm63_80_moro
Pilot														gm_pl_airforce_pilot_pm_80_gry
Rifleman												gm_pl_army_rifleman_akm_80_moro
Heavy Grenadier									gm_pl_army_grenadier_pallad_d_80_moro
Grenadier												gm_pl_army_grenadier_akm_pallad_80_moro
Radioman												gm_pl_army_radioman_akm_80_moro
Paratrooper											gm_pl_army_paratrooper_pm63_80_moro
Medic														gm_pl_army_medic_akm_80_moro
Light Machinegunner							gm_pl_army_machinegunner_rpk_80_moro
Light Machinegunner Assistant		gm_pl_army_machinegunner_assistant_akm_rpk_80_moro
Machinegunner										gm_pl_army_machinegunner_pk_80_moro
Machinegunner Assistant					gm_pl_army_machinegunner_assistant_akm_pk_80_moro
Anti-Tank												gm_pl_army_antitank_akm_rpg7_80_moro
Anti-Tank Assistant							gm_pl_army_antitank_assistant_akm_rpg7_80_moro
Anti-Air												gm_pl_army_antiair_akm_9k32m_80_moro
ATGM Gunner											gm_pl_army_antitank_akm_fagot_80_moro
Demolition											gm_pl_army_demolition_akm_80_moro
Pioneer													gm_pl_army_engineer_akm_80_moro
Marksman												gm_pl_army_marksman_svd_80_moro
Squad Leader										gm_pl_army_squadleader_akm_80_moro
Officer													gm_pl_army_officer_pm_80_moro


Men, '80 (Autumn)

Rifleman												gm_pl_army_rifleman_akm_80_autumn_moro
Heavy Grenadier									gm_pl_army_grenadier_pallad_d_80_autumn_moro
Grenadier												gm_pl_army_grenadier_akm_pallad_80_autumn_moro
Radioman												gm_pl_army_radioman_akm_80_autumn_moro
Medic														gm_pl_army_medic_akm_80_autumn_moro
Paratrooper											gm_pl_army_paratrooper_pm63_80_autumn_moro
Light Machinegunner							gm_pl_army_machinegunner_rpk_80_autumn_moro
Light Machinegunner Assistant		gm_pl_army_machinegunner_assistant_akm_rpk_80_autumn_moro
Machinegunner										gm_pl_army_machinegunner_pk_80_autumn_moro
Machinegunner Assistant					gm_pl_army_machinegunner_assistant_akm_pk_80_autumn_moro
Anti-Tank												gm_pl_army_antitank_akm_rpg7_80_autumn_moro
Anti-Tank Assistant							gm_pl_army_antitank_assistant_akm_rpg7_80_autumn_moro
Anti-Air												gm_pl_army_antiair_akm_9k32m_80_autumn_moro
ATGM Gunner											gm_pl_army_antitank_akm_fagot_80_autumn_moro
Demolition											gm_pl_army_demolition_akm_80_autumn_moro
Pioneer													gm_pl_army_engineer_akm_80_autumn_moro
Marksman												gm_pl_army_marksman_svd_80_autumn_moro
Squad Leader										gm_pl_army_squadleader_akm_80_autumn_moro
Officer													gm_pl_army_officer_pm_80_autumn_moro


Men, '80 (Winter)

Rifleman												gm_pl_army_rifleman_akm_80_win
Heavy GrenadieR									gm_pl_army_grenadier_pallad_d_80_win
Grenadier												gm_pl_army_grenadier_akm_pallad_80_win
Radioman												gm_pl_army_radioman_akm_80_win
Medic														gm_pl_army_medic_akm_80_win
Paratrooper											gm_pl_army_paratrooper_pm63_80_win
Light Machinegunner							gm_pl_army_machinegunner_rpk_80_win
Light Machinegunner Assistant		gm_pl_army_machinegunner_assistant_akm_rpk_80_win
Machinegunner										gm_pl_army_machinegunner_pk_80_win
Machinegunner Assistant					gm_pl_army_machinegunner_assistant_akm_pk_80_win
Anti-Tank												gm_pl_army_antitank_akm_rpg7_80_win
Anti-Tank Assistant							gm_pl_army_antitank_assistant_akm_rpg7_80_win
Anti-Air												gm_pl_army_antiair_akm_9k32m_80_win
ATGM Gunner											gm_pl_army_antitank_akm_fagot_80_win
Demolition											gm_pl_army_demolition_akm_80_win
Pioneer													gm_pl_army_engineer_akm_80_win
Marksman												gm_pl_army_marksman_svd_80_win
Squad Leader										gm_pl_army_squadleader_akm_80_win
Officer													gm_pl_army_officer_pm_80_win


Special Forces, '80

Rifleman												gm_pl_army_sf_rifleman_akmn_80_moro
Radioman												gm_pl_army_sf_radioman_akmn_80_moro
Grenadier												gm_pl_army_sf_grenadier_akm_pallad_80_moro
Shock Trooper										gm_pl_army_sf_rifleman_pm63_80_moro
Light Machinegunner							gm_pl_army_sf_machinegunner_rpk_80_moro
Anti-Tank												gm_pl_army_sf_antitank_akmn_rpg7_80_moro
Anti-Air												gm_pl_army_sf_antiair_pm63_9k32m_80_moro
ATGM Gunner											gm_pl_army_sf_antitank_akmn_fagot_80_moro
Demolition											gm_pl_army_sf_demolition_pm63_80_moro
Pioneer													gm_pl_army_sf_engineer_pm63_80_moro
Marksman												gm_pl_army_sf_marksman_svd_80_moro
Squad Leader										gm_pl_army_sf_squadleader_akmn_80_moro


Special Forces, '80 (Winter)

Rifleman									gm_pl_army_sf_rifleman_akmn_80_win
Radioman									gm_pl_army_sf_radioman_akmn_80_win
Grenadier									gm_pl_army_sf_grenadier_akm_pallad_80_win
Shock Trooper							gm_pl_army_sf_rifleman_pm63_80_win
Light Machinegunner				gm_pl_army_sf_machinegunner_rpk_80_win
Anti-Tank									gm_pl_army_sf_antitank_akmn_rpg7_80_win
Anti-Air									gm_pl_army_sf_antiair_pm63_9k32m_80_win
ATGM Gunner								gm_pl_army_sf_antitank_akmn_fagot_80_win
Demolition								gm_pl_army_sf_demolition_pm63_80_win
Pioneer										gm_pl_army_sf_engineer_pm63_80_win
Marksman								  gm_pl_army_sf_marksman_svd_80_win
Squad Leader							gm_pl_army_sf_squadleader_akmn_80_win



EAST GERMANY BORDERGUARDS (EAST)
-------------------------------------------------------------
Cars

P601 (Patrol)							gm_gc_bgs_p601
Truck gel. 5 Repair				gm_gc_bgs_ural4320_repair
Truck gel. 5 Transport		gm_gc_bgs_ural4320_cargo
Truck gel. 5 Ammo					gm_gc_bgs_ural4320_reammo
Pkw gel. 469							gm_gc_bgs_uaz469_cargo
Pkw gel. 469 SPG-9				gm_gc_bgs_uaz469_spg9
Truck gel. 5 Mp Fuel			gm_gc_bgs_ural375d_refuel
Truck gel. 5 Mp Medical		gm_gc_bgs_ural375d_medic


Helicopters

Mi-2P							gm_gc_bgs_mi2p
Mi-2US						gm_gc_bgs_mi2us

Turrets

Searchlight				gm_gc_bgs_searchlight_01


Men

Rifleman					gm_gc_bgs_sf_rifleman_hk33_80_str
Shock Trooper			gm_gc_bgs_sf_rifleman_pm63_80_str
Demolition				gm_gc_bgs_sf_demolition_pm63_80_str
Marksman					gm_gc_bgs_sf_marksman_svd_80_str
Squad Leader			gm_gc_bgs_sf_squadleader_hk33_80_str
Border Guard			gm_gc_bgs_rifleman_mpikm72_80_str




WEST GERMANY UNITS - WINTER & SUMMER (WEST)
-------------------------------------------------------------

Anti-Air

FlakPz 1A1										gm_ge_army_gepard1a1


APCs

M113A1G APC										gm_ge_army_m113a1g_apc
M113A1G APC LATGM							gm_ge_army_m113a1g_apc_milan
M113A1G Command								gm_ge_army_m113a1g_command
M113A1G Medical								gm_ge_army_m113a1g_medic
SpPz 2A												gm_ge_army_luchsa1
SpPz 2A2											gm_ge_army_luchsa2
SPz 1A1A											gm_ge_army_marder1a1a
SPz 1A1+											gm_ge_army_marder1a1plus
SPz 1A2												gm_ge_army_marder1a2
TPz 1A0 Recon									gm_ge_army_fuchsa0_reconnaissance
TPz 1A0 Engineer							gm_ge_army_fuchsa0_engineer
TPz 1A0 Comman								gm_ge_army_fuchsa0_command


Artillery

110mm SF2 LARS 2							gm_ge_army_kat1_463_mlrs
M109G													gm_ge_army_m109g


Cars

FlKfz 1000										gm_ge_army_u1300l_firefighter
FlKfz ELW											gm_ge_army_typ247_firefighter
K125 gl												gm_ge_army_k125
Pkw 2													gm_ge_army_typ1200_cargo
Pkw 5 Seats Transport					gm_ge_army_typ247_cargo
Pkw 8 Seats										gm_ge_army_typ253_cargo
Pkw 8 Seats Military Police		gm_ge_army_typ253_mp
Pkw Heavy											gm_ge_army_w123_cargo
Truck 0.5t tmil g							gm_ge_army_iltis_cargo
Truck 0.5t tmil gl LATGM			gm_ge_army_iltis_milan
Truck 0.5t tmil gl MG3				gm_ge_army_iltis_mg3
Truck 10t mil gl Flatbed			gm_ge_army_kat1_454_cargo
Truck 10t mil gl Ammo					gm_ge_army_kat1_454_reammo
Truck 2t mil gl Transport			gm_ge_army_u1300l_cargo
Truck 2t mil gl Flatbed				gm_ge_army_u1300l_container
Truck 2t mil gl Repair				gm_ge_army_u1300l_repair
Truck 2t mil gl Medical				gm_ge_army_u1300l_medic
Truck 5t mil gl Transport			gm_ge_army_kat1_451_cargo
Truck 5t mil gl Flatbed				gm_ge_army_kat1_451_container
Truck 5t mil gl Ammo					gm_ge_army_kat1_451_reammo
Truck 5t mil gl Fuel					gm_ge_army_kat1_451_refuel
Truck 7t mil gl Flatbed				gm_ge_army_kat1_452_container
Service Bicycle								gm_ge_army_bicycle_01_oli


Helicopters

CH-53G												gm_ge_army_ch53g
CH-53GS												gm_ge_army_ch53gs
PAH 1													gm_ge_army_bo105p_pah1
PAH 1A1												gm_ge_army_bo105p_pah1a1
VBH 1													gm_ge_army_bo105m_vbh
VBH 1A1												gm_ge_army_bo105p1m_vbh
VBH 1A1 Swooper								gm_ge_army_bo105p1m_vbh_swooper


Planes

Do 28 D2						gm_ge_airforce_do28d2
Do 28 D2 (Medevac)	gm_ge_airforce_do28d2_medevac


Tanks

BPz 2A0												gm_ge_army_bpz2a0
BrPz 1												gm_ge_army_bibera0
KPz 1A												gm_ge_army_Leopard1a1
KPz 1A1A1											gm_ge_army_Leopard1a1a1
KPz 1A1A2											gm_ge_army_Leopard1a1a2
KPz 1A3												gm_ge_army_Leopard1a3
KPz 1A3A1											gm_ge_army_Leopard1a3a1
KPz 1A5												gm_ge_army_Leopard1a5


Turrets

LATGM - Tripod								gm_ge_army_milan_launcher_tripod
MG3 - Anti Air Tripod					gm_ge_army_mg3_aatripod


Men, '80

Pilot														gm_ge_army_pilot_p1_80_oli
Pilot (Rescue)									gm_ge_army_pilot_80_rolled_sar
Crew														gm_ge_army_crew_mp2a1_80_oli
Crew														gm_ge_army_crew_90_flk
Paratrooper											gm_ge_army_paratrooper_g3a4_80_oli
Officer													gm_ge_army_officer_p1_80_oli
Military Policeman							gm_ge_army_militarypolice_p1_80_oli
Marksman												gm_ge_army_marksman_g3a3_80_ols
Rifleman												gm_ge_army_rifleman_g3a3_80_ols
Radioman												gm_ge_army_radioman_g3a3_80_ols
Grenadier												gm_ge_army_grenadier_g3a3_80_ols
Heavy Grenadier									gm_ge_army_grenadier_hk69a1_80_ols
Machinegunner										gm_ge_army_machinegunner_mg3_80_ols
Machinegunner Assistant					gm_ge_army_machinegunner_assistant_g3a3_mg3_80_ols
Anti-Tank												gm_ge_army_antitank_g3a3_pzf44_80_ols
Anti-Tank Assistant							gm_ge_army_antitank_assistant_g3a3_pzf44_80_ols
Heavy Anti-Tank									gm_ge_army_antitank_g3a3_pzf84_80_ols
Heavy Anti-Tank Assistant				gm_ge_army_antitank_assistant_g3a3_pzf84_80_ols
Anti-Air												gm_ge_army_antiair_g3a3_fim43_80_ols
ATGM Gunner											gm_ge_army_antitank_g3a3_milan_80_ols
Medic														gm_ge_army_medic_g3a3_80_ols
Demolition											gm_ge_army_demolition_g3a4_80_ols
Pioneer													gm_ge_army_engineer_g3a4_80_ols
Squad Leader										gm_ge_army_squadleader_g3a3_p2a1_80_ols


Men, '80 (Autumm)

Paratrooper											gm_ge_army_paratrooper_g3a4_parka_80_oli
Marksman												gm_ge_army_marksman_g3a3_parka_80_ols
Rifleman												gm_ge_army_rifleman_g3a3_parka_80_ols
Radioman												gm_ge_army_radioman_g3a3_parka_80_ols
Grenadier												gm_ge_army_grenadier_g3a3_parka_80_ols
Heavy Grenadier									gm_ge_army_grenadier_hk69a1_parka_80_ols
Machinegunner										gm_ge_army_machinegunner_mg3_parka_80_ols
Machinegunner Assistant					gm_ge_army_machinegunner_assistant_g3a3_mg3_parka_80_ols
Anti-Tank												gm_ge_army_antitank_g3a3_pzf44_parka_80_ols
Anti-Tank Assistant							gm_ge_army_antitank_assistant_g3a3_pzf44_parka_80_ols
Heavy Anti-Tank									gm_ge_army_antitank_g3a3_pzf84_parka_80_ols
Heavy Anti-Tank Assistant				gm_ge_army_antitank_assistant_g3a3_pzf84_parka_80_ols
Anti-Air												gm_ge_army_antiair_g3a3_fim43_parka_80_ols
ATGM Gunner											gm_ge_army_antitank_g3a3_milan_parka_80_ols
Medic														gm_ge_army_medic_g3a3_parka_80_ols
Demolition											gm_ge_army_demolition_g3a4_parka_80_ols
Pioneer													gm_ge_army_engineer_g3a4_parka_80_ols
Squad Leader										gm_ge_army_squadleader_g3a3_p2a1_parka_80_ols
Officer													gm_ge_army_officer_p1_parka_80_ols
Military Policeman							gm_ge_army_militarypolice_p1_parka_80_ols


Men, '80 (Winter)

Paratrooper											gm_ge_army_paratrooper_g3a4_parka_80_win
Marksman												gm_ge_army_marksman_g3a3_parka_80_win
Rifleman												gm_ge_army_rifleman_g3a3_parka_80_win
Radioman												gm_ge_army_radioman_g3a3_parka_80_win
Grenadier												gm_ge_army_grenadier_g3a3_parka_80_win
Heavy Grenadier									gm_ge_army_grenadier_hk69a1_parka_80_win
Machinegunner										gm_ge_army_machinegunner_mg3_parka_80_win
Machinegunner Assistant					gm_ge_army_machinegunner_assistant_g3a3_mg3_parka_80_win
Anti-Tank												gm_ge_army_antitank_g3a3_pzf44_parka_80_win
Anti-Tank Assistant							gm_ge_army_antitank_assistant_g3a3_pzf44_parka_80_win
Heavy Anti-Tank									gm_ge_army_antitank_g3a3_pzf84_parka_80_win
Heavy Anti-Tank Assistant				gm_ge_army_antitank_assistant_g3a3_pzf84_parka_80_win
Anti-Air												gm_ge_army_antiair_g3a3_fim43_parka_80_win
ATGM Gunner											gm_ge_army_antitank_g3a3_milan_parka_80_win
Medic														gm_ge_army_medic_g3a3_parka_80_win
Demolition											gm_ge_army_demolition_g3a4_parka_80_win
Pioneer													gm_ge_army_engineer_g3a4_parka_80_win
Squad Leader										gm_ge_army_squadleader_g3a3_p2a1_parka_80_win
Officer													gm_ge_army_officer_p1_parka_80_win
Military Policeman							gm_ge_army_militarypolice_p1_parka_80_win


Men, '90

Paratrooper											gm_ge_army_paratrooper_g36a1_90_flk
Marksman												gm_ge_army_marksman_g3a3_90_flk
Rifleman												gm_ge_army_rifleman_g36a1_90_flk
Radioman												gm_ge_army_radioman_g36a1_90_flk
Heavy Grenadier									gm_ge_army_grenadier_hk69a1_90_flk
Machinegunner										gm_ge_army_machinegunner_mg3_90_flk
Machinegunner Assistant					gm_ge_army_machinegunner_assistant_g36a1_mg3_90_flk
Anti-Tank												gm_ge_army_antitank_g36a1_pzf3_90_flk
Anti-Air												gm_ge_army_antiair_g36a1_fim43_90_flk
ATGM Gunner											gm_ge_army_antitank_g36a1_milan_90_flk
Medic														gm_ge_army_medic_g36a1_90_flk
Demolition											gm_ge_army_demolition_g36a1_90_flk
Pioneer													gm_ge_army_engineer_g36a1_90_flk
Squad Leader										gm_ge_army_squadleader_g36a1_p2a1_90_flk
Officer													gm_ge_army_officer_p1_90_flk


Men, '90 (Winter)

Paratrooper											gm_ge_army_paratrooper_g36a1_90_win
Marksman												gm_ge_army_marksman_g3a3_90_win
Rifleman												gm_ge_army_rifleman_g36a1_90_win
Radioman												gm_ge_army_radioman_g36a1_90_win
Heavy Grenadier									gm_ge_army_grenadier_hk69a1_90_win
Machinegunner										gm_ge_army_machinegunner_mg3_90_win
Machinegunner Assistant					gm_ge_army_machinegunner_assistant_g36a1_mg3_90_win
Anti-Tank												gm_ge_army_antitank_g36a1_pzf3_90_win
Anti-Air												gm_ge_army_antiair_g36a1_fim43_90_win
ATGM Gunner											gm_ge_army_antitank_g36a1_milan_90_win
Medic														gm_ge_army_medic_g36a1_90_win
Demolition											gm_ge_army_demolition_g36a1_90_win
Pioneer													gm_ge_army_engineer_g36a1_90_win
Squad Leader										gm_ge_army_squadleader_g36a1_p2a1_90_win
Officer													gm_ge_army_officer_p1_90_win


Special Forces, '80

Rifleman												gm_ge_army_sf_rifleman_g3a4_80_wdl
Shock Trooper										gm_ge_army_sf_rifleman_mp5a3_80_wdl
Radioman												gm_ge_army_sf_radioman_mp5a3_80_wdl
Marksman												gm_ge_army_sf_marksman_g3a3_80_wdl
Heavy Grenadier									gm_ge_army_sf_grenadier_hk69a1_80_wdl
Heavy Anti-Tank									gm_ge_army_sf_antitank_mp5a2_pzf84_80_wdl
Heavy Anti-Tank Assistant				gm_ge_army_sf_antitank_assistant_mp5a2_pzf84_80_wdl
Anti-Air												gm_ge_army_sf_antiair_mp5a3_fim43_80_wdl
ATGM Gunner											gm_ge_army_sf_antitank_mp5a3_milan_80_wdl
Demolition											gm_ge_army_sf_demolition_mp5a2_80_wdl
Squad Leader										gm_ge_army_sf_squadleader_mp5sd3_p2a1_80_wdl
Light Machinegunner							gm_ge_army_sf_machinegunner_g8a2_80_wdl


Special Forces, '80 (Winter)

Rifleman												gm_ge_army_sf_rifleman_g3a4_parka_80_win
Shock Trooper										gm_ge_army_sf_rifleman_mp5a3_parka_80_win
Radioman												gm_ge_army_sf_radioman_mp5a3_parka_80_win
Heavy Grenadier									gm_ge_army_sf_grenadier_hk69a1_parka_80_win
Marksman												gm_ge_army_sf_marksman_g3a3_parka_80_win
Heavy Anti-Tank									gm_ge_army_sf_antitank_mp5a2_pzf84_parka_80_win
Heavy Anti-Tank Assistant				gm_ge_army_sf_antitank_assistant_mp5a3_pzf84_parka_80_win
Anti-Air												gm_ge_army_sf_antiair_mp5a3_fim43_parka_80_win
ATGM Gunner											gm_ge_army_sf_antitank_mp5a3_milan_parka_80_win
Demolition											gm_ge_army_sf_demolition_mp5a2_parka_80_win
Squad Leader										gm_ge_army_sf_squadleader_mp5sd3_p2a1_parka_80_win
Light Machinegunner							gm_ge_army_sf_machinegunner_g8a2_parka_80_win






DENMARK - WINTER & SUMMER (WEST)
-------------------------------------------------------------
APCs

M113A1DK APC									gm_dk_army_m113a1dk_apc
M113A1DK Engineer							gm_dk_army_m113a1dk_engineer
M113A1DK Command							gm_dk_army_m113a1dk_command
M113A1DK Medical							gm_dk_army_m113a1dk_medic
M113A2DK PNMK									gm_dk_army_m113a2dk


Artillery

M109													gm_dk_army_m109


Cars

M111													gm_dk_army_typ1200_cargo
M247													gm_dk_army_typ247_cargo
M253													gm_dk_army_typ253_cargo
M253 Military Police					gm_dk_army_typ253_mp
Truck 2t mil gl Flatbed				gm_dk_army_u1300l_container


Tanks

BrPz 1												gm_dk_army_bibera0
BPz 2A0												gm_dk_army_bpz2a0
KPz 1A3												gm_dk_army_Leopard1a3


Turrets

MG3 - Anti Air Tripod					gm_dk_army_mg3_aatripod


Men, '80

Crew													gm_dk_army_crew_84_oli
Rifleman											gm_dk_army_rifleman_g3a3_84_m84
Radioman											gm_dk_army_radioman_g3a3_84_m84
Marksman											gm_dk_army_marksman_g3a3_84_m84
Machinegunner									gm_dk_army_machinegunner_mg3_84_m84
Machinegunner Assistant				gm_dk_army_machinegunner_assistant_g3a3_mg3_84_m84
Anti-Tank											gm_dk_army_antitank_g3a3_m72a3_84_m84
Heavy Anti-Tank								gm_dk_army_antitank_g3a3_pzf84_84_m84
Anti-Air											gm_dk_army_antiair_g3a3_fim43_84_m84
Heavy Anti-Tank Assistant			gm_dk_army_antitank_assistant_g3a3_pzf84_84_m84
Medic													gm_dk_army_medic_g3a3_84_m84
Demolition										gm_dk_army_demolition_g3a4_84_m84
Squad Leader									gm_dk_army_squadleader_g3a3_p2a1_84_m84


Men, '80 (Winter)

Rifleman											gm_dk_army_rifleman_g3a3_84_win
Radioman											gm_dk_army_radioman_g3a3_84_win
Marksman											gm_dk_army_marksman_g3a3_84_win
Machinegunner									gm_dk_army_machinegunner_mg3_84_win
Machinegunner Assistant				gm_dk_army_machinegunner_assistant_g3a3_mg3_84_win
Anti-Tank											gm_dk_army_antitank_g3a3_m72a3_84_win
Heavy Anti-Tank								gm_dk_army_antitank_g3a3_pzf84_84_win
Anti-Air											gm_dk_army_antiair_g3a3_fim43_84_win
Heavy Anti-Tank Assistant			gm_dk_army_antitank_assistant_g3a3_pzf84_84_win
Medic													gm_dk_army_medic_g3a3_84_win
Demolition										gm_dk_army_demolition_g3a4_84_win
Squad Leader									gm_dk_army_squadleader_g3a3_p2a1_84_win


Men, '90

Rifleman											gm_dk_army_rifleman_gvm95_90_m84
Radioman											gm_dk_army_radioman_gvm95_90_m84
Marksman											gm_dk_army_marksman_g3a3_90_m84
Machinegunner									gm_dk_army_machinegunner_mg3_90_m84
Machinegunner Assistant				gm_dk_army_machinegunner_assistant_gvm95_mg3_90_m84
Anti-Tank											gm_dk_army_antitank_gvm95_m72a3_90_m84
Heavy Anti-Tank								gm_dk_army_antitank_gvm95_pzf84_90_m84
Anti-Air											gm_dk_army_antiair_gvm95_fim43_90_m84
Heavy Anti-Tank Assistant			gm_dk_army_antitank_assistant_gvm95_pzf84_90_m84
Medic													gm_dk_army_medic_gvm95_90_m84
Demolition										gm_dk_army_demolition_gvm95_90_m84
Squad Leader									gm_dk_army_squadleader_gvm95_p2a1_90_m84


Men, '90 (Winter)

Rifleman											gm_dk_army_rifleman_gvm95_90_win
Radioman											gm_dk_army_radioman_gvm95_90_win
Marksman											gm_dk_army_marksman_g3a3_90_win
Machinegunner									gm_dk_army_machinegunner_mg3_90_win
Machinegunner Assistant				gm_dk_army_machinegunner_assistant_gvm95_mg3_90_win
Anti-Tank											gm_dk_army_antitank_gvm95_m72a3_90_win
Heavy Anti-Tank								gm_dk_army_antitank_gvm95_pzf84_90_win
Anti-Air											gm_dk_army_antiair_gvm95_fim43_90_win
Heavy Anti-Tank Assistant			gm_dk_army_antitank_assistant_gvm95_pzf84_90_win
Medic													gm_dk_army_medic_gvm95_90_win
Demolition										gm_dk_army_demolition_gvm95_90_win
Squad Leader									gm_dk_army_squadleader_gvm95_p2a1_90_win


Special Forces, '80

Rifleman											gm_dk_army_sf_rifleman_g3a4_84_m84
Radioman											gm_dk_army_sf_radioman_g3a4_84_m84
Shock Trooper									gm_dk_army_sf_rifleman_mp5a3_84_m84
Marksman											gm_dk_army_sf_marksman_g3a3_84_m84
Anti-Tank											gm_dk_army_sf_antitank_mp5a3_m72a3_84_m84
Heavy Anti-Tank								gm_dk_army_sf_antitank_mp5a3_pzf84_84_m84
Heavy Anti-Tank Assistant			gm_dk_army_sf_antitank_assistant_mp5a3_pzf84_84_m84
Anti-Air											gm_dk_army_sf_antiair_mp5a3_fim43_84_m84
Demolition										gm_dk_army_sf_demolition_mp5a3_84_m84
Squad Leader									gm_dk_army_sf_squadleader_mp5a3_p2a1_84_m84
Machinegunner									gm_dk_army_sf_machinegunner_mg8_84_m84


Special Forces, '80 (Winter)

Rifleman											gm_dk_army_sf_rifleman_g3a4_84_win
Radioman											gm_dk_army_sf_radioman_g3a4_84_win
Shock Trooper									gm_dk_army_sf_rifleman_mp5a3_84_win
Marksman											gm_dk_army_sf_marksman_g3a3_84_win
Anti-Tank											gm_dk_army_sf_antitank_mp5a3_m72a3_84_win
Heavy Anti-Tank								gm_dk_army_sf_antitank_mp5a3_pzf84_84_win
Heavy Anti-Tank Assistant			gm_dk_army_sf_antitank_assistant_mp5a3_pzf84_84_win
Anti-Air											gm_dk_army_sf_antiair_mp5a3_fim43_84_win
Demolition										gm_dk_army_sf_demolition_mp5a3_84_win
Squad Leader									gm_dk_army_sf_squadleader_mp5a3_p2a1_84_win
Machinegunner									gm_dk_army_sf_machinegunner_mg8_84_win


Special Forces, '90

Rifleman											gm_dk_army_sf_rifleman_mpm85_90_m84
Radioman											gm_dk_army_sf_radioman_mpm85_90_m84
Marksman											gm_dk_army_sf_marksman_msg90a1_90_m84
Anti-Tank											gm_dk_army_sf_antitank_mpm85_m72a3_90_m84
Heavy Anti-Tank								gm_dk_army_sf_antitank_mpm85_pzf84_90_m84
Heavy Anti-Tank Assistant			gm_dk_army_sf_antitank_assistant_mpm85_pzf84_90_m84
Anti-Air											gm_dk_army_sf_antiair_mpm85_fim43_90_m84
Demolition										gm_dk_army_sf_demolition_mpm85_90_m84
Squad Leader									gm_dk_army_sf_squadleader_mpm85_p2a1_90_m84
Machinegunner									gm_dk_army_sf_machinegunner_mg8_90_m84


Special Forces, '90 (Winter)

Rifleman											gm_dk_army_sf_rifleman_mpm85_90_win
Radioman											gm_dk_army_sf_radioman_mpm85_90_win
Marksman											gm_dk_army_sf_marksman_msg90a1_90_win
Anti-Tank											gm_dk_army_sf_antitank_mpm85_m72a3_90_win
Heavy Anti-Tank								gm_dk_army_sf_antitank_mpm85_pzf84_90_win
Heavy Anti-Tank Assistant			gm_dk_army_sf_antitank_assistant_mpm85_pzf84_90_win
Anti-Air											gm_dk_army_sf_antiair_mpm85_fim43_90_win
Demolition										gm_dk_army_sf_demolition_mpm85_90_win
Squad Leader									gm_dk_army_sf_squadleader_mpm85_p2a1_90_win
Machinegunner									gm_dk_army_sf_machinegunner_mg8_90_win







WEST GERMANY BORDERGUARDS (WEST)
-------------------------------------------------------------

Cars

K125 gl						gm_ge_bgs_k125
Typ 253						gm_ge_bgs_typ253_cargo
W123							gm_ge_bgs_w123_cargo
Service Bicycle 	gm_ge_bgs_bicycle_01_grn


Helicopters

VBH 1							gm_ge_bgs_bo105m_vbh


Men, '80

Officer											gm_ge_bgs_officer_80_grn
Crew												gm_ge_bgs_crew_80_grn
Pilot												gm_ge_bgs_pilot_p1_80_grn
Machinegunner								gm_ge_bgs_machinegunner_mg3_80_smp
Light Machinegunner					gm_ge_bgs_machinegunner_g8a1_80_smp
Rifleman										gm_ge_bgs_rifleman_mp5a2_80_smp
Radioman										gm_ge_bgs_radioman_mp5a2_80_smp
Machinegunner Assistant			gm_ge_bgs_machinegunner_assistant_mp5a2_mg3_80_smp
Squad Leader								gm_ge_bgs_squadleader_mp5a2_p2a1_80_smp


Special Forces, '80

Squad Leader								gm_ge_bgs_sf_squadleader_mp5a2_80_blk
Rifleman										gm_ge_bgs_sf_rifleman_mp5a2_80_blk
Specialist									gm_ge_bgs_sf_specialist_hk512_80_blk
Demolition									gm_ge_bgs_sf_demolition_mp5a2_80_blk
Marksman										gm_ge_bgs_sf_marksman_psg1_80_blk
Machinegunner								gm_ge_bgs_sf_machinegunner_g8_80_blk
Heavy Grenadier							gm_ge_bgs_sf_grenadier_hk69a1_80_blk


Special Forces, '90

Squad Leader								gm_ge_bgs_sf_squadleader_sig551_90_blk
Shock Trooper								gm_ge_bgs_sf_rifleman_mp5a2_90_blk
Specialist									gm_ge_bgs_sf_specialist_hk512_90_blk
Demolition									gm_ge_bgs_sf_demolition_sig551_90_blk
Marksman										gm_ge_bgs_sf_marksman_psg1_90_blk
Machinegunner								gm_ge_bgs_sf_machinegunner_g8_90_blk
Heavy Grenadier							gm_ge_bgs_sf_grenadier_hk69a1_90_blk




REVOLUTIONARIES (GUER)
-------------------------------------------------------------
Men, '80

Rifleman										gm_xx_army_rifleman_01_akm_alp
Medic												gm_xx_army_medic_01_mpikms72_m84
Light Machinegunner					gm_xx_army_machinegunner_rpk_80_oli
Shock Trooper								gm_xx_army_assault_ak74nk_80_wdl
Anti-Tank										gm_xx_army_antitank_hk53a2_rpg7_80_oli
Demolition									gm_xx_army_demolition_mp2a1_80_blk
Pioneer											gm_xx_army_engineer_hk33a2_80_brn
Marksman										gm_xx_army_marksman_svd_80_wdl
Squad Leader								gm_xx_army_squadleader_m16a1_80_grn





WEST GERMANY CIVILIANS (CIVS)
-------------------------------------------------------------
Cars

Typ 1200										gm_ge_civ_typ1200
Typ 1200 (Post)							gm_ge_dbp_typ1200
Typ 1200 (Police)						gm_ge_pol_typ1200
Typ 1200 (Firefighters)			gm_ge_ff_typ1200
Typ 247											gm_ge_civ_typ247
Typ 247 (Post)							gm_ge_dbp_typ247
Typ 247 (Firefighters)			gm_ge_ff_typ247
FlKfz ELW										gm_ge_ff_typ247_firefighter
Typ 251											gm_ge_civ_typ251
Typ 251 (Post)							gm_ge_dbp_typ251
Typ 253											gm_ge_civ_typ253
Typ 253 (Taxi)							gm_ge_taxi_typ253
Typ 253 (Police)						gm_ge_pol_typ253
Typ 253 (Firefighters)			gm_ge_ff_typ253
Truck 2t gl									gm_ge_civ_u1300l
FlKfz 1000									gm_ge_ff_u1300l_firefighter
U1300L Medical							gm_ge_ff_u1300l_medic
W123												gm_ge_civ_w123
W123 (Taxi)									gm_ge_taxi_w123
W123 (Post									gm_ge_dbp_w123
W123 (Police)								gm_ge_pol_w123
W123 (Firefighters)					gm_ge_ff_w123
Post Bicycle								gm_ge_dbp_bicycle_01_ylw
Police Bicycle							gm_ge_pol_bicycle_01_grn


Helicopters

LH 105M (Police)						gm_ge_pol_bo105m_vbh
LH 105M (ADAK)							gm_ge_adak_bo105m_vbh


Men, '80

Police Officer				gm_ge_pol_officer_80_grn
Mailman								gm_ge_dbp_man_01_80_blu
Policeman							gm_ge_pol_patrol_80_blk
Firefighter						gm_ge_ff_man_80_orn
Pilot									gm_ge_pol_pilot_p1_80_grn
Pilot (Rescue)				gm_ge_adak_pilot_80_sar





EAST GERMANY CIVILIANS (CIVS)
-------------------------------------------------------------
Planes

L-410S						gm_gc_civ_l410s_passenger
L-410S Salon			gm_gc_civ_l410s_salon


Helicopters

Mi-2P				gm_gc_civ_mi2p
Mi-2R				gm_gc_civ_mi2r
Mi-2SR			gm_gc_civ_mi2sr


Cars

P601									gm_gc_civ_p601
P601 (Post)						gm_gc_dp_p601
P601 (Police)					gm_gc_pol_p601
P601 (Firefighters)		gm_gc_ff_p601
Truck gel. 5 Mp				gm_gc_civ_ural375d_cargo
Bicycle								gm_xx_civ_bicycle_01


men

Police Officer				gm_gc_pol_officer_80_blu
Civilian							gm_gc_civ_man_02_80_gry
Man, Black						gm_gc_civ_man_01_80_blk
Man, Blue							gm_gc_civ_man_01_80_blu
Man, Brown						gm_gc_civ_man_02_80_brn
Man, Green T-Shirt		gm_gc_civ_man_03_80_grn
Man, Grey T-Shirt			gm_gc_civ_man_03_80_gry
Man, Blue T-Shirt			gm_gc_civ_man_03_80_blu
Worker, Grey					gm_gc_civ_man_04_80_gry
Worker, Blue					gm_gc_civ_man_04_80_blu
Pilot									gm_gc_civ_pilot_80_blk