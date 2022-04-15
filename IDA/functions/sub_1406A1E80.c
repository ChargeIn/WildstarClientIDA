//----- (00000001406A1E80) ----------------------------------------------------
__int64 __fastcall sub_1406A1E80(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rdi
	__int64 v4; // rax
	int v5; // eax
	__int64 v6; // rax
	int v7; // eax
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rax
	int v11; // eax
	unsigned int v12; // ecx
	__int64* v13; // rax
	int v14; // r8d
	__int64 v15; // rcx

	v2 = sub_140056AB0(a1, 1u);
	if (v2 && (v3 = *(_QWORD*)(v2 + 8)) != 0)
	{
		if ((dword_140DC4B0C & 1) == 0)
		{
			dword_140DC4B0C |= 1u;
			v4 = sub_140200220(0x420u);
			if (v4)
				v5 = *(_DWORD*)(v4 + 4);
			else
				v5 = 300;
			qword_140C8B000 = v5;
			v6 = sub_140200220(0x420u);
			if (v6)
				v7 = *(_DWORD*)(v6 + 8);
			else
				v7 = 1800;
			qword_140C8B008 = v7;
			v8 = sub_140200220(0x420u);
			if (v8)
				v9 = *(_DWORD*)(v8 + 12);
			else
				v9 = 7200;
			qword_140C8B010 = v9;
			v10 = sub_140200220(0x420u);
			if (v10)
				v11 = *(_DWORD*)(v10 + 16);
			else
				v11 = 43200;
			qword_140C8B018 = v11;
		}
		v12 = 0;
		v13 = &qword_140C8B000;
		v14 = 4;
		while (*(_QWORD*)(v3 + 56) > (unsigned __int64)*v13)
		{
			++v12;
			++v13;
			if (v12 >= 4)
				goto LABEL_22;
		}
		v14 = v12;
	LABEL_22:
		v15 = a1[2];
		*(_DWORD*)(v15 + 8) = 3;
		*(double*)v15 = (double)v14;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 140C8B000: using guessed type __int64 qword_140C8B000;
// 140C8B008: using guessed type __int64 qword_140C8B008;
// 140C8B010: using guessed type __int64 qword_140C8B010;
// 140C8B018: using guessed type __int64 qword_140C8B018;
// 140DC4B0C: using guessed type int dword_140DC4B0C;

