/*
 * Copyright (C) 2005-2009 MaNGOS <http://getmangos.com/>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOS_DBCSFRM_H
#define MANGOS_DBCSFRM_H

// correct for 1.12
const char AreaTableEntryfmt[]="iiinixxxxxissssssssxixxxx";
const char AuctionHouseEntryfmt[]="niiixxxxxxxxx";
const char AreaTriggerEntryfmt[]="niffffffff";
const char BankBagSlotPricesEntryfmt[]="ni";
const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char ChatChannelsEntryfmt[]="iixssssssssxxxxxxxxxx";
const char ChrClassesEntryfmt[]="nxxxissssssssixxx";
const char CreatureFamilyfmt[]="nfifiiiissssssssxx";
const char FactionEntryfmt[]="niiiiiiiiiiiiiiiiiissssssssxxxxxxxxxx";
const char ItemRandomPropertiesfmt[]="nxiiixxxxxxxxxxx";
const char ItemSetEntryfmt[]="dssssssssxxxxxxxxxxxxxxxxxxiiiiiiiiiiiiiiiiii";
const char QuestSortEntryfmt[]="nxxxxxxxxx";
const char MailTemplateEntryfmt[]="nxxxxxxxxx";
const char SkillLinefmt[]="nixssssssssxxxxxxxxxxi";
const char TaxiNodesEntryfmt[]="nifffxxxxxxxxxii";
const char TalentTabEntryfmt[]="nxxxxxxxxxxxiix";
const char WorldSafeLocsEntryfmt[]="nifffxxxxxxxxx";
const char WorldMapAreaEntryfmt[]="xinxffff";
const char TaxiPathNodeEntryfmt[]="diiifffii";
const char SpellFocusObjectfmt[]="nxxxxxxxxx";
const char SpellItemEnchantmentfmt[]="niiiiiixxxiiissssssssxii";
const char SpellShapeshiftfmt[]="nxxxxxxxxxxixx";
const char SpellRangefmt[]="nffixxxxxxxxxxxxxxxxxx";
const char MapEntryfmt[]="nxixssssssssxxxxxxxixxxxxxxxxxxxxxxxxxixxx";

// endof correct for 1.12


const char BattlemasterListEntryfmt[]="niiixxxxxiiiixxssssssssssssssssxx";
// 3*12 new item fields in 3.0.x
//const char CharStartOutfitEntryfmt[]="diiiiiiiiiiiiiiiiiiiiiiiiixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char CharTitlesEntryfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxi";
                                                            // ChatChannelsEntryfmt, index not used (more compact store)
//const char ChrClassesEntryfmt[]="nxixxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxix";
const char ChrRacesEntryfmt[]="nxixiixxixixxxisssssssssixxxx";
const char CinematicSequencesEntryfmt[]="nxxxxxxxxx";
const char CreatureDisplayInfofmt[]="nxxxxxxxxfxx";
const char CreatureSpellDatafmt[]="nxxxxxxxx";
const char DurabilityCostsfmt[]="niiiiiiiiiiiiiiiiiiiiiiiiiiiii";
const char DurabilityQualityfmt[]="nf";
const char EmotesEntryfmt[]="nxixxxxxxxxxxxxxxxx";
const char EmotesTextEntryfmt[]="nxixxxxxxxxxxxxxxxx";
const char FactionTemplateEntryfmt[]="niiiiiiiiiiiii";
const char GemPropertiesEntryfmt[]="nixxi";
const char GtCombatRatingsfmt[]="f";

const char GtChanceToMeleeCritBasefmt[]="f";
const char GtChanceToMeleeCritfmt[]="f";
const char GtChanceToSpellCritBasefmt[]="f";
const char GtChanceToSpellCritfmt[]="f";
const char GtOCTRegenHPfmt[]="f";
//const char GtOCTRegenMPfmt[]="f";
const char GtRegenHPPerSptfmt[]="f";
const char GtRegenMPPerSptfmt[]="f";
const char Itemfmt[]="niii";
const char ItemBagFamilyfmt[]="nxxxxxxxxxxxxxxxxx";
//const char ItemDisplayTemplateEntryfmt[]="nxxxxxxxxxxixxxxxxxxxxx";
//const char ItemCondExtCostsEntryfmt[]="xiii";
const char ItemExtendedCostEntryfmt[]="niiiiiiiiiiiii";
const char ItemRandomSuffixfmt[]="nxxxxxxxxxxxxxxxxxxiiiiii";
const char LockEntryfmt[]="niiiiixxxiiiiixxxiixxxxxxxxxxxxxx";
const char RandomPropertiesPointsfmt[]="niiiiiiiiiiiiiii";
const char SkillLineAbilityfmt[]="niiiixxiiiiixxi";
const char SoundEntriesfmt[]="nxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
const char SpellCastTimefmt[]="nixx";
const char SpellDurationfmt[]="niii";
const char SpellEntryfmt[]="nixiiiiiiiixiiiiiiiiiiiiiiiiiiiiiiiiiiiiifxiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiffffffiiiiiiiiiiiiiiiiiiiiifffiiiiiiiiiiiiiiifffixiixssssssssssssssssxssssssssssssssssxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxiiiiiiiiiixfffxxxiiii";
const char SpellItemEnchantmentConditionfmt[]="nbbbbbxxxxxbbbbbbbbbbiiiiiXXXXX";
const char SpellRadiusfmt[]="nfxf";
const char StableSlotPricesfmt[] = "ni";
const char TalentEntryfmt[]="niiiiiiiixxxxixxixxxi";
const char TaxiPathEntryfmt[]="niii";
const char TotemCategoryEntryfmt[]="nxxxxxxxxxxxxxxxxxii";

#endif
