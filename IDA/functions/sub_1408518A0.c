//----- (00000001408518A0) ----------------------------------------------------
__int64 __fastcall sub_1408518A0(_QWORD* a1, int a2, char a3)
{
	__int64 result; // rax
	__int64 v7; // rbx
	int v8; // edi
	__int64 v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rax

	result = a1[4];
	if (result)
	{
		while (*(_DWORD*)(result + 64) != a2)
		{
			result = *(_QWORD*)(result + 16);
			if (!result)
				goto LABEL_4;
		}
	}
	else
	{
	LABEL_4:
		result = sub_1408819F0(dword_140C10F20, 80i64);
		v7 = result;
		if (result)
		{
			*(_QWORD*)(result + 24) = a1;
			*(_QWORD*)(result + 8) = 0i64;
			*(_QWORD*)(result + 16) = 0i64;
			*(_QWORD*)result = off_1409A3618;
			*(_QWORD*)(result + 32) = 0i64;
			*(_QWORD*)(result + 40) = 0i64;
			*(_QWORD*)(result + 48) = 0i64;
			*(_DWORD*)(result + 56) = 0;
			*(_DWORD*)(result + 64) = a2;
			*(_DWORD*)(result + 68) = 0;
			*(_BYTE*)(result + 72) = 0;
			if ((unsigned int)sub_140829E90(qword_140C61B78, a2, result) == 1)
			{
				v11 = a1[4];
				if (v11)
				{
					*(_QWORD*)(v7 + 16) = v11;
					a1[4] = v7;
				}
				else
				{
					a1[4] = v7;
					*(_QWORD*)(v7 + 16) = 0i64;
				}
				*(_DWORD*)(v7 + 68) = sub_14082A0A0(qword_140C61B78, a2);
				if (a3)
					(*(void(__fastcall**)(_QWORD*))(*a1 + 416i64))(a1);
				return v7;
			}
			else
			{
				v8 = dword_140C10F20;
				*(_QWORD*)v7 = off_1409A3618;
				v9 = *(_QWORD*)(v7 + 40);
				if (v9)
				{
					*(_QWORD*)(v7 + 48) = v9;
					sub_140881720(dword_140C10F20, v9);
					*(_QWORD*)(v7 + 40) = 0i64;
					*(_QWORD*)(v7 + 48) = 0i64;
					*(_DWORD*)(v7 + 56) = 0;
				}
				v10 = *(_QWORD*)(v7 + 32);
				if (v10)
					sub_140881720(dword_140C10F20, v10);
				*(_QWORD*)(v7 + 32) = 0i64;
				sub_140881720(v8, v7);
				return 0i64;
			}
		}
	}
	return result;
}
// 1409A3618: using guessed type __int64 (__fastcall *off_1409A3618[5])();
// 140C10F20: using guessed type int dword_140C10F20;
// 140C61B78: using guessed type __int64 qword_140C61B78;

