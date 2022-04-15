//----- (000000014014A0A0) ----------------------------------------------------
__int64 __fastcall sub_14014A0A0(_QWORD* a1)
{
	_OWORD* v2; // rbx
	char* v3; // r10
	int v4; // r8d
	const char* v5; // rdx
	char v6; // r9
	const char* v7; // rax
	__int64 v8; // r10
	__int64 v9; // rbx
	__int64 v10; // rax
	__int64 v11; // r9
	unsigned __int64 v12; // r8
	__int64 v13; // rax
	_DWORD* v14; // rcx
	__int64 v15; // rbx
	_DWORD* v16; // rax
	__int64 v17; // rbx
	__int64 v19; // [rsp+20h] [rbp-18h] BYREF
	int v20; // [rsp+28h] [rbp-10h]

	v2 = (_OWORD*)sub_140056AB0(a1, 1u);
	v3 = (char*)sub_140056BB0(a1, 2u, 0i64);
	v4 = *v3;
	if (v4 == 109)
	{
		v5 = "min";
		v6 = 109;
		while (v6)
		{
			v6 = (v5++)[v3 - "min" + 1];
			if (v6 != *v5)
				goto LABEL_5;
		}
		return sub_140145410(a1, v2);
	}
	else
	{
	LABEL_5:
		if (v4 == 108)
		{
			v7 = "lim";
			v8 = v3 - "lim";
			while ((_BYTE)v4)
			{
				LOBYTE(v4) = (v7++)[v8 + 1];
				if ((_BYTE)v4 != *v7)
					goto LABEL_9;
			}
			return sub_140145410(a1, v2 + 1);
		}
		else
		{
		LABEL_9:
			v9 = a1[4];
			v10 = sub_140062650((__int64)a1, (unsigned __int64*)"AaRect", 6ui64);
			v11 = a1[2];
			v19 = v10;
			v20 = 4;
			sub_14005E8E0((__int64)a1, v9 + 160, (int*)&v19, v11);
			a1[2] += 16i64;
			v12 = a1[2];
			v13 = a1[3];
			v14 = dword_140A12138;
			v15 = v12 - v13;
			v16 = (_DWORD*)(v13 + 16);
			v17 = v15 >> 4;
			if ((unsigned __int64)v16 < v12)
				v14 = v16;
			*(_QWORD*)v12 = *(_QWORD*)v14;
			*(_DWORD*)(v12 + 8) = v14[2];
			a1[2] += 16i64;
			sub_14005E8E0((__int64)a1, a1[2] - 32i64, (int*)(a1[2] - 16i64), a1[2] - 16i64);
			sub_140058350((__int64)a1, v17);
			a1[2] -= 16i64;
			return 1i64;
		}
	}
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

