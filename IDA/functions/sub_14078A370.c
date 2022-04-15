//----- (000000014078A370) ----------------------------------------------------
void __fastcall sub_14078A370(__int64 a1)
{
	__int64 v2; // rcx
	bool v3; // zf
	int v4; // eax
	__int64 v5; // rax
	int v6[3]; // [rsp+20h] [rbp-28h] BYREF
	__int64 v7; // [rsp+2Ch] [rbp-1Ch]
	__int64 v8; // [rsp+34h] [rbp-14h]
	int v9; // [rsp+3Ch] [rbp-Ch]

	if (*(_DWORD*)(a1 + 92) == 3)
	{
		v2 = *(_QWORD*)(a1 + 136);
		if (v2)
		{
			v3 = *(_DWORD*)(a1 + 88) == 0;
			v4 = 1109;
			v6[2] = 1065353216;
			if (!v3)
				v4 = 6669;
			v6[0] = v4;
			v6[1] = 0;
			v7 = 0i64;
			v8 = 0i64;
			v9 = 0;
			(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v2 + 584i64))(v2, 0i64, v6);
		}
		v5 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 84) = 1;
		*(_DWORD*)(a1 + 92) = 4;
		*(_BYTE*)(v5 + 1232) = 1;
	}
}

