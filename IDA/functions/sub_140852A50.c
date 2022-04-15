//----- (0000000140852A50) ----------------------------------------------------
float __fastcall sub_140852A50(__int64 a1, unsigned __int64 a2)
{
	unsigned __int8* v2; // r8
	__int64 v3; // r10
	unsigned int v4; // r9d
	__int64 v5; // rcx
	__int64 v6; // rdx
	float* v7; // rax
	float result; // xmm0_4
	float v9; // [rsp+8h] [rbp+8h] BYREF

	if ((*(_DWORD*)(a1 + 96) & 0x20000000) != 0)
	{
		sub_140836340(qword_140C61BB0, a1, 29, a2);
	}
	else
	{
		v2 = *(unsigned __int8**)(a1 + 80);
		v3 = 0i64;
		v9 = *(float*)&dword_140C11020;
		if (v2)
		{
			v4 = *v2;
			v5 = 0i64;
			while (1)
			{
				v6 = (unsigned int)(v5 + 1);
				if (v2[v6] == 8)
					break;
				v5 = (unsigned int)v6;
				if ((unsigned int)v6 >= v4)
					goto LABEL_9;
			}
			v3 = (__int64)&v2[4 * v5 + ((v4 + 4) & 0xFFFFFFFC)];
		}
	LABEL_9:
		v7 = &v9;
		if (v3)
			v7 = (float*)v3;
		return *v7;
	}
	return result;
}
// 140C11020: using guessed type int dword_140C11020;
// 140C61BB0: using guessed type __int64 qword_140C61BB0;

