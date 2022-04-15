//----- (000000014062F130) ----------------------------------------------------
unsigned __int64 __fastcall sub_14062F130(__int64 a1)
{
	return *(unsigned int*)(a1 + 4) ^ (*(unsigned __int16*)(a1 + 10) | (unsigned __int64)(unsigned int)(*(_DWORD*)a1 << 16)) ^ (unsigned int)__ROR4__(*(_DWORD*)a1, 8) ^ (unsigned int)__ROR4__(*(_DWORD*)(a1 + 16), 12) ^ (unsigned __int64)(unsigned int)__ROL4__(*(_DWORD*)(a1 + 12), 8);
}

