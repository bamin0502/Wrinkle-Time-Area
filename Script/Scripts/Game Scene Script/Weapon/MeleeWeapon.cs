using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Data;
using Newtonsoft.Json;

public class MeleeWeapon : Weapon
{
    public override void Attack(Transform target, int isSkill)
    {
        bool isEnemy = target.TryGetComponent(out EnemyHealth enemy);
        if (isEnemy)
        {
            if (weaponType == WeaponType.OneHanded)
            {
                SoundManager.instance.PlaySE("Sword_Attack");
            }
            else if (weaponType == WeaponType.TwoHanded)
            {
                SoundManager.instance.PlaySE("Hammer_Attack");
            }
            enemy.TakeDamage(isSkill == 0 ? damage : skillDamage);
        }
    }

}
