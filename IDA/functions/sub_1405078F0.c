//----- (00000001405078F0) ----------------------------------------------------
__int64 __fastcall sub_1405078F0(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	unsigned int v4; // edx
	_DWORD* v6; // rcx
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+28h] [rbp-20h]
	int v9; // [rsp+2Ch] [rbp-1Ch]
	int v10; // [rsp+30h] [rbp-18h]
	int v11; // [rsp+34h] [rbp-14h]

	v2 = sub_140506EA0(a1);
	v3 = a1[2];
	if (!v2)
		goto LABEL_5;
	v4 = 0;
	if ((int)((v3 - a1[3]) >> 4) >= 2)
	{
		v4 = (int)sub_140056C40(a1, 2u);
		if (v4 >= 2)
		{
			v3 = a1[2];
		LABEL_5:
			*(_DWORD*)(v3 + 8) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v6 = *(_DWORD**)(v2 + 1112);
	v7 = *(_QWORD*)(232i64 * v4 + v2 + 1080);
	v8 = v6[4];
	v9 = v6[5];
	v10 = v6[6];
	v11 = v6[7];
	return sub_140501210(a1, &v7);
}

