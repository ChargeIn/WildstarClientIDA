//----- (00000001406D6420) ----------------------------------------------------
__int64 __fastcall sub_1406D6420(_QWORD* a1)
{
	_DWORD* v2; // rax
	int v3; // eax
	_DWORD* v4; // rax
	int v5; // eax
	int v7; // [rsp+38h] [rbp+10h] BYREF
	int v8; // [rsp+3Ch] [rbp+14h]
	int v9; // [rsp+40h] [rbp+18h] BYREF
	int v10; // [rsp+44h] [rbp+1Ch]

	if (sub_1406D5FA0(a1))
	{
		v2 = (_DWORD*)(a1[3] + 16i64);
		if ((unsigned __int64)v2 < a1[2] && v2 != dword_140A12138 && *(int*)(a1[3] + 24i64) > 0)
		{
			v3 = sub_140056D60(a1, 2u);
			if (v3 >= 0)
			{
				v9 = BYTE1(v3);
				v10 = (unsigned __int8)v3;
				v4 = (_DWORD*)(a1[3] + 32i64);
				if ((unsigned __int64)v4 < a1[2] && v4 != dword_140A12138 && *(int*)(a1[3] + 40i64) > 0)
				{
					v5 = sub_140056D60(a1, 3u);
					if (v5 >= 1)
					{
						v7 = 0;
						v8 = v5 + 16;
						sub_1403C17D0(qword_140C65898, &v9, &v7, 0);
					}
				}
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

