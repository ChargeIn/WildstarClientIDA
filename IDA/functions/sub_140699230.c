//----- (0000000140699230) ----------------------------------------------------
__int64 __fastcall sub_140699230(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rdi
	int v6; // ebx
	int v7; // eax
	int v8; // ecx
	int v9; // eax
	int v11; // [rsp+38h] [rbp+10h] BYREF
	int v12; // [rsp+3Ch] [rbp+14h]

	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = sub_140056D60(a1, 2u) - 1;
				v7 = sub_140056D60(a1, 3u);
				v8 = 200;
				v9 = v7 - 1;
				if (*(_DWORD*)(v5 + 16) == 1)
					v8 = 100;
				v12 = v9;
				v11 = v6 + v8;
				sub_14057F730(v5, &v11);
			}
		}
	}
	return 0i64;
}
// 140699260: variable 'v3' is possibly undefined

