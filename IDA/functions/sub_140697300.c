//----- (0000000140697300) ----------------------------------------------------
__int64 __fastcall sub_140697300(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rdi
	char* v6; // rax
	__int64 v7; // rbx
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = (__int64*)sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = (char*)sub_140056BB0(a1, 1u, 0i64);
				sub_14018F2D0(&v9, v6);
				v7 = v10;
				sub_14057ECD0(v5, v10);
				if (v7)
					sub_14018B900(v7, 0);
			}
		}
	}
	return 0i64;
}
// 140697330: variable 'v3' is possibly undefined

