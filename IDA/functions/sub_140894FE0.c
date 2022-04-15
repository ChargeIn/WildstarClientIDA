//----- (0000000140894FE0) ----------------------------------------------------
void __fastcall sub_140894FE0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rbx
	_QWORD* v3; // rdi
	_QWORD* v6; // rax
	int v7; // edi
	_QWORD* v8; // [rsp+30h] [rbp-18h]
	_QWORD* v9; // [rsp+38h] [rbp-10h]

	v2 = *(_QWORD**)(a1 + 8);
	v3 = 0i64;
	while (v2)
	{
		if ((*(unsigned int(__fastcall**)(_QWORD*))(*v2 + 8i64))(v2) == 1 && v2[3] == a2)
		{
			v6 = (_QWORD*)v2[1];
			v9 = v3;
			v8 = v6;
			if (v2 == *(_QWORD**)(a1 + 8))
				*(_QWORD*)(a1 + 8) = v6;
			else
				v3[1] = v6;
			if (v2 == *(_QWORD**)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v3;
			v7 = dword_140C10F20;
			(*(void(__fastcall**)(_QWORD*, _QWORD)) * v2)(v2, 0i64);
			sub_140881720(v7, (__int64)v2);
			v3 = v9;
			v2 = v8;
		}
		else
		{
			v3 = v2;
			v2 = (_QWORD*)v2[1];
		}
	}
}
// 140895055: conditional instruction was optimized away because rbx.8!=0
// 140C10F20: using guessed type int dword_140C10F20;

