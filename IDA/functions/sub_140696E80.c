//----- (0000000140696E80) ----------------------------------------------------
__int64 __fastcall sub_140696E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rsi
	int v6; // ebx
	char* v7; // rax
	__int64 v8; // rdi
	__int64 v10; // [rsp+20h] [rbp-28h] BYREF
	__int64 v11; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u);
				if (v6 > 0)
					--v6;
				v7 = (char*)sub_140056BB0(a1, 3u, 0i64);
				sub_14018F2D0(&v10, v7);
				v8 = v11;
				sub_14057EA50(v5, v6, v11);
				if (v8)
					sub_14018B900(v8, 0);
			}
		}
	}
	return 0i64;
}
// 140696EB0: variable 'v3' is possibly undefined

