//----- (0000000140692C40) ----------------------------------------------------
__int64 __fastcall sub_140692C40(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	__int64 v4; // rdi
	char* v5; // rax
	void* v6; // rbx
	int v7; // edx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	void* lpv; // [rsp+28h] [rbp-20h]
	void* v11; // [rsp+30h] [rbp-18h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v3 = *(_QWORD*)(v2 + 8);
		if (v3)
		{
			v4 = sub_140401220((__int64*)qword_140C658A0, *(_DWORD*)(v3 + 8), *(_QWORD*)(v3 + 16));
			if (v4)
			{
				v5 = (char*)sub_140056BB0(a1, 2u, 0i64);
				sub_14018F2D0(&v9, v5);
				v6 = lpv;
				if ((unsigned int)sub_1403E1170(lpv, 0))
				{
					v9 = 0i64;
					lpv = 0i64;
					v11 = 0i64;
					lpv = *(void**)(v4 + 16);
					v7 = **(_DWORD**)(v4 + 8);
					v11 = v6;
					LODWORD(v9) = v7;
					sub_1403F4740(qword_140C65898, 0x1BDu, (__int64)&v9);
				}
				if (v6)
					sub_14018B900((__int64)v6, 0);
			}
		}
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;

