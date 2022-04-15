//----- (0000000140843D00) ----------------------------------------------------
__m128 __fastcall sub_140843D00(__int64 a1)
{
	__int128 v1; // xmm6
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 i; // rcx
	int v5; // ecx
	int v6; // ebx

	v1 = 0xBF800000;
	v2 = sub_140830310(qword_140C61BA0, a1);
	v3 = v2;
	if (v2)
	{
		for (i = qword_140C61F90; i; i = *(_QWORD*)(i + 24))
		{
			if (*(_QWORD*)(i + 176) == v2 && *(float*)&v1 <= *(float*)(i + 428))
				v1 = *(unsigned int*)(i + 428);
		}
		v5 = *(_DWORD*)(v2 + 136) ^ (*(_DWORD*)(v2 + 136) ^ (*(_DWORD*)(v2 + 136) - 1)) & 0x3FFFFFFF;
		*(_DWORD*)(v2 + 136) = v5;
		if ((v5 & 0x3FFFFFFF) == 0)
		{
			v6 = dword_140C10F20;
			sub_14084BD30(v2);
			sub_140881720(v6, v3);
		}
	}
	return (__m128)v1;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;
// 140C61F90: using guessed type __int64 qword_140C61F90;

