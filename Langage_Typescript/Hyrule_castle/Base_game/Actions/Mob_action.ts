import { Display } from "../Display/display";
import { Add_Damages_combat_log } from "../Display/display_damages";
import { Damages } from "../data/Damages";
import { Tower } from "../data/Tower";
import { Units } from "../data/Unit";
import { combat_log } from "../initialisation/initialisation_tower";
import { Attack, Damages_output } from "./Damages_management";

export function Mobaction(unit: Units, hero_list: Units[]) {
  const target = hero_list[Math.floor(Math.random() * hero_list.length)];
  Damages_output(unit, target, Attack(unit), hero_list);
  return;
}
