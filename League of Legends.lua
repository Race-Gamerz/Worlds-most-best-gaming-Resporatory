-- Simplified ability script
function OnAbilityCast(champion, target)
    local damage = champion.abilityPower * 0.8 + champion.attackDamage * 0.2
    ApplyDamage(target, damage)
    PlayAnimation(champion, "AbilityCast")
    CreateParticleEffect("AbilityImpact", target.position)
end
