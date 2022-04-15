//----- (000000014084EB30) ----------------------------------------------------
__int64* __fastcall sub_14084EB30(_QWORD* a1, __int64* a2)
{
	__int64*** v4; // rcx
	__int64 v5; // rax
	__int64** v7; // rax
	__int64** v8; // rcx
	_QWORD* v9; // rdi
	__int64 v10; // rax
	char v11; // r14
	__int64 v12; // rax
	int v13; // ebx
	__int64 v14; // rax
	char v15; // di
	__int64 v16; // rax

	if (!a2)
	{
		sub_140830940((__int64**)qword_140C61BA0, (__int64)a1);
		if (!a1[5])
		{
			v14 = a1[6];
			if (v14)
				v15 = *(_BYTE*)(v14 + 32);
			else
				v15 = 0;
			v16 = sub_1408819F0(dword_140C10F20, 40i64);
			if (v16)
			{
				*(_QWORD*)(v16 + 8) = a1;
				*(_QWORD*)(v16 + 16) = 0i64;
				*(_QWORD*)v16 = off_1409A3278;
				*(_QWORD*)(v16 + 24) = 0i64;
				*(_BYTE*)(v16 + 32) = v15;
			}
			else
			{
				v16 = 0i64;
			}
			a1[5] = v16;
		}
		return (__int64*)a1[5];
	}
	v4 = (__int64***)a1[14];
	if (!v4)
	{
		v5 = sub_1408819F0(dword_140C10F20, 24i64);
		a1[14] = v5;
		if (v5)
		{
			*(_QWORD*)v5 = 0i64;
			*(_QWORD*)(v5 + 8) = 0i64;
			*(_DWORD*)(v5 + 16) = 0;
		}
		v4 = (__int64***)a1[14];
		if (!v4)
			return 0i64;
	}
	v7 = *v4;
	v8 = v4[1];
	if (v7 == v8)
		goto LABEL_13;
	do
	{
		if (*v7 == a2)
			break;
		v7 += 2;
	} while (v7 != v8);
	if (v7 == v8 || v7 == (__int64**)-8i64)
	{
	LABEL_13:
		v10 = a1[6];
		if (v10)
			v11 = *(_BYTE*)(v10 + 32);
		else
			v11 = 0;
		v12 = sub_1408819F0(dword_140C10F20, 40i64);
		v9 = (_QWORD*)v12;
		if (v12)
		{
			*(_QWORD*)(v12 + 8) = a1;
			*(_QWORD*)(v12 + 16) = a2;
			*(_QWORD*)v12 = off_1409A3278;
			*(_QWORD*)(v12 + 24) = 0i64;
			*(_BYTE*)(v12 + 32) = v11;
			if (sub_140897CD0((_QWORD*)a1[14], (__int64)a2, v12))
			{
				if ((unsigned int)sub_14084C3A0(a2, (__int64)a1) == 1)
					return v9;
				sub_140850AC0(a1[14], (__int64)a2);
			}
			v13 = dword_140C10F20;
			sub_140873940(v9);
			sub_140881720(v13, (__int64)v9);
		}
		return 0i64;
	}
	return v7[1];
}
// 1409A3278: using guessed type __int64 (__fastcall *off_1409A3278[2])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61BA0: using guessed type __int64 qword_140C61BA0;

