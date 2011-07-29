local combat = createCombatObject()
setCombatParam(combat, COMBAT_PARAM_TYPE, COMBAT_EARTHDAMAGE)
setCombatParam(combat, COMBAT_PARAM_EFFECT, CONST_ME_CARNIPHILA)
setCombatParam(combat, COMBAT_PARAM_DISTANCEEFFECT, CONST_ANI_EARTH)
setCombatFormula(combat, COMBAT_FORMULA_LEVELMAGIC, -2, -10, -1.5, -20, 5, 5, 1.4, 2.2)

function onCastSpell(cid, var)
	return doCombat(cid, combat, var)
end
