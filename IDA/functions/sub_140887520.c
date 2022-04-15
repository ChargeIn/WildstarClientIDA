//----- (0000000140887520) ----------------------------------------------------
void __fastcall sub_140887520(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	__int64 v4; // r10
	_QWORD* v5; // r8
	__int64 v6; // r11
	__int64 v7; // rcx
	unsigned __int64 v8; // rcx
	__int64 v9; // [rsp+20h] [rbp-38h] BYREF
	__int64 v10; // [rsp+28h] [rbp-30h]
	__int128 v11; // [rsp+30h] [rbp-28h]
	__int128 v12; // [rsp+40h] [rbp-18h]

	v2 = *(_QWORD*)(a1 + 200);
	v4 = 0i64;
	v9 = 0i64;
	v10 = 0i64;
	v5 = 0i64;
	while (v2)
	{
		v6 = *(_QWORD*)(v2 + 8);
		if (*(_QWORD*)v6 + *(unsigned int*)(v2 + 16) == a2)
		{
			v8 = *(unsigned int*)(a1 + 148);
			a2 = *(_QWORD*)v6 + *(unsigned int*)(v6 + 24);
			if ((_DWORD)v8 && a2 >= v8)
				a2 = *(unsigned int*)(a1 + 144);
			v5 = (_QWORD*)v2;
			v2 = *(_QWORD*)v2;
		}
		else
		{
			v7 = *(_QWORD*)v2;
			*((_QWORD*)&v12 + 1) = v5;
			*(_QWORD*)&v12 = v7;
			if (v2 == *(_QWORD*)(a1 + 200))
				*(_QWORD*)(a1 + 200) = v7;
			else
				*v5 = v7;
			if (v2 == *(_QWORD*)(a1 + 208))
				*(_QWORD*)(a1 + 208) = v5;
			v9 = v2;
			v11 = v12;
			v5 = (_QWORD*)*((_QWORD*)&v12 + 1);
			if (v4)
			{
				*(_QWORD*)v2 = v4;
				v4 = v2;
			}
			else
			{
				v10 = v2;
				v4 = v2;
				*(_QWORD*)v2 = 0i64;
			}
			v2 = v11;
		}
	}
	if (*(_BYTE*)(*(_QWORD*)(a1 + 96) + 248i64) || *(_QWORD*)(a1 + 200))
		sub_140887660(a1, &v9, 0);
	else
		sub_140887660(a1, &v9, 1);
}

