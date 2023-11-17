using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace mino 
{
    public enum PlayerState
    {
        Idle,   
        RunForward,   
        HammerAttackIdle,   
        Dead, 
        SpaceMove, 
        ItemUse,
        GetHit 
    }

    public class AniSetting : MonoBehaviour
    {
        public Animator ani;
        private static readonly int AniPlayer = Animator.StringToHash("aniPlayer");
        
        void Start()
        {
            ani = GetComponent<Animator>();
        }
        public void ChangeAnimation(PlayerState aniNumber)
        {
            ani.SetInteger(AniPlayer, (int)aniNumber);
        }

        public void SetTrigger(int aniNumber)
        {
            ani.SetTrigger(aniNumber);
        }
    }
}



