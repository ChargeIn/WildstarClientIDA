//----- (0000000140838BE0) ----------------------------------------------------
__int64 __fastcall sub_140838BE0(__int64 a1, __int64 a2, float a3, char a4)
{
	bool v6; // bp
	__int64 v7; // rdi
	__int64 v8; // rax
	__int64 result; // rax
	__int64 v10; // rdx
	__int64 v11; // rcx
	__int64 v12; // r8
	__int64 v13; // rax
	bool v14; // zf
	__int64 v15; // rax
	int v16; // ecx

	v6 = *(_BYTE*)(a1 + 40) && a4;
	v7 = *(_QWORD*)(a1 + 24);
	v8 = sub_140834F40((__int64*)(v7 + 24), *(_QWORD*)(a1 + 32));
	result = sub_140835840(v7, v8, a3, *(_QWORD*)(a1 + 32), v6);
	if (a4)
	{
		v10 = *(_QWORD*)(a1 + 24);
		v11 = 0i64;
		v12 = *(_QWORD*)(v10 + 48);
		v13 = v12;
		if (v12)
		{
			while (v13 != a1)
			{
				v11 = v13;
				v13 = *(_QWORD*)(v13 + 8);
				if (!v13)
					goto LABEL_14;
			}
			if (v13)
			{
				v14 = v13 == v12;
				v15 = *(_QWORD*)(v13 + 8);
				if (v14)
					*(_QWORD*)(v10 + 48) = v15;
				else
					*(_QWORD*)(v11 + 8) = v15;
			}
		}
	LABEL_14:
		*(_QWORD*)(a1 + 16) = 0i64;
		v16 = dword_140C10F20;
		*(_QWORD*)a1 = &off_1409A2EB8;
		return sub_140881720(v16, a1);
	}
	return result;
}
// 1409A2EB8: using guessed type __int64 (__fastcall *off_1409A2EB8)();
// 140C10F20: using guessed type int dword_140C10F20;

