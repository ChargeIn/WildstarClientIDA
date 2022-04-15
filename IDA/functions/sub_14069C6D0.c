//----- (000000014069C6D0) ----------------------------------------------------
__int64 __fastcall sub_14069C6D0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64* v5; // rbx
	__int16 v6; // ax
	int v8; // [rsp+38h] [rbp+10h] BYREF
	int v9; // [rsp+3Ch] [rbp+14h]

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
				v8 = HIBYTE(v6);
				v9 = (unsigned __int8)v6;
				if (*(_DWORD*)(qword_140C65898 + 26180) == 49)
					sub_1403C28F0(qword_140C65898, &v8, v5);
			}
		}
	}
	return 0i64;
}
// 14069C700: variable 'v3' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;

