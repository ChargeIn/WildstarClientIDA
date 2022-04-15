//----- (000000014083A390) ----------------------------------------------------
__int64 __fastcall sub_14083A390(__int64 a1, __int64 a2)
{
	__int16 v2; // r10
	int v3; // r9d
	__int64 v4; // rcx
	int* v5; // rdx
	unsigned int v6; // r8d
	unsigned int v7; // eax
	unsigned int v8; // ecx

	v2 = *(unsigned __int8*)(a2 + 4);
	v3 = *(_DWORD*)(a2 + 5);
	v4 = a1 + 32;
	v5 = (int*)((unsigned int)(5 * v3) + a2 + 5 + 9);
	v6 = *(int*)((char*)v5 - 5);
	*(_WORD*)(v4 + 16) = v2;
	*(_BYTE*)(v4 + 18) = *((_BYTE*)v5 - 1);
	v7 = sub_140834C10(v4, v5, v6, v3);
	v8 = 1;
	if (v7 != 1)
		return v7;
	return v8;
}

