//----- (00000001408529A0) ----------------------------------------------------
__m128 __fastcall sub_1408529A0(__int64 a1, unsigned __int64 a2)
{
	unsigned __int8* v2; // r9
	__int64 v3; // r11
	unsigned int v6; // r10d
	int v7; // r8d
	__int64 v8; // rcx
	unsigned int* v9; // rax
	__int128 v10; // xmm6
	unsigned int v12; // [rsp+40h] [rbp+8h] BYREF

	v2 = *(unsigned __int8**)(a1 + 80);
	v3 = 0i64;
	v12 = 0;
	if (v2)
	{
		v6 = *v2;
		v7 = 0;
		while (1)
		{
			v8 = (unsigned int)(v7 + 1);
			if (v2[v8] == 9)
				break;
			++v7;
			if ((unsigned int)v8 >= v6)
				goto LABEL_7;
		}
		v3 = (__int64)&v2[4 * v7 + ((v6 + 4) & 0xFFFFFFFC)];
	}
LABEL_7:
	v9 = &v12;
	if (v3)
		v9 = (unsigned int*)v3;
	v12 = *v9;
	v10 = v12;
	if ((*(_DWORD*)(a1 + 96) & 0x40000000) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 30, a2);
		*(float*)&v10 = *(float*)&v10 + 0.0;
	}
	return (__m128)v10;
}
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

