//----- (000000014003DB40) ----------------------------------------------------
__int64 __fastcall sub_14003DB40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
	__int64 v5; // r14
	__int64 v7; // rbx
	__int64 result; // rax
	unsigned __int64 v10; // rbp
	int* v11; // rsi
	__int64 v12; // rbx
	int* v13; // rax
	__int64 v14; // rdi
	unsigned __int64 v15; // rbx
	unsigned __int64 i; // rbp
	int* v17; // rsi
	__int64 v18; // rbx
	int* v19; // rax
	__int64 v20; // rdi
	unsigned __int64 v21; // rbx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25[2]; // [rsp+20h] [rbp-48h] BYREF

	v5 = a1;
	v7 = a4;
	result = sub_14000B690(qword_140C635F0, 3i64);
	if ((int)result >= 0)
	{
		*(_DWORD*)(v5 + 148) = 0;
		v10 = 0i64;
		if (a3)
		{
			do
			{
				v11 = *(int**)(a2 + 8 * v10);
				if (v11)
				{
					v12 = 0i64;
					if (*(_WORD*)v11)
					{
						do
							++v12;
						while (*((_WORD*)v11 + v12));
					}
					v13 = sub_14018B280(2 * v12 + 18, 0);
					if (v13)
					{
						*(_QWORD*)v13 = off_140B55060;
						*((_QWORD*)v13 + 1) = v12;
					}
					else
					{
						v13 = 0i64;
					}
					v14 = (__int64)(v13 + 4);
					v15 = 2 * v12;
					sub_1407DB590(v13 + 4, v11, v15);
					v25[0] = v14;
					*(_WORD*)(v15 + v14) = 0;
				}
				else
				{
					v25[0] = 0i64;
				}
				sub_140019B70((__int64*)(v5 + 120), v25);
				if (v25[0])
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25[0] - 16) + 8i64))(v25[0] - 16);
				++v10;
			} while (v10 < a3);
			v5 = a1;
			v7 = a4;
		}
		for (i = 0i64; i < a5; ++i)
		{
			v17 = *(int**)(v7 + 8 * i);
			if (v17)
			{
				v18 = 0i64;
				if (*(_WORD*)v17)
				{
					do
						++v18;
					while (*((_WORD*)v17 + v18));
				}
				v19 = sub_14018B280(2 * v18 + 18, 0);
				if (v19)
				{
					*(_QWORD*)v19 = off_140B55060;
					*((_QWORD*)v19 + 1) = v18;
				}
				else
				{
					v19 = 0i64;
				}
				v20 = (__int64)(v19 + 4);
				v21 = 2 * v18;
				sub_1407DB590(v19 + 4, v17, v21);
				v25[0] = v20;
				*(_WORD*)(v21 + v20) = 0;
				v7 = a4;
			}
			else
			{
				v25[0] = 0i64;
			}
			sub_140019B70((__int64*)(v5 + 104), v25);
			if (v25[0])
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v25[0] - 16) + 8i64))(v25[0] - 16);
		}
		if (*(_QWORD*)(v5 + 96) || (result = sub_14004D210((__int64*)(v5 + 96)), (int)result >= 0))
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
				qword_140C65670,
				L"UI\\Cursors\\Point.tex",
				v5 + 80);
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 160i64))(
					qword_140C65670,
					L"UI\\Cursors\\hourglass.tex",
					v5 + 88);
				if ((int)result >= 0)
				{
					result = sub_140040310((__int64*)v5);
					if ((int)result >= 0)
					{
						*(_DWORD*)(v5 + 144) = 1;
						if (!qword_140C66E38)
						{
							sub_140198D60(v22, (int*)L"pregamereloadui", (__int64)sub_1400405A0, 0i64);
							sub_140198D60(v23, (int*)L"pregameGetLuaErrors", (__int64)sub_140040660, 0i64);
						}
						if (!*(_QWORD*)(v5 + 152))
						{
							*(_QWORD*)(v5 + 152) = &qword_140C66E38;
							*(_QWORD*)(v5 + 160) = qword_140C66E38;
							qword_140C66E38 = v5;
							v24 = *(_QWORD*)(v5 + 160);
							if (v24)
								*(_QWORD*)(v24 + 152) = v5 + 160;
						}
						return 0i64;
					}
				}
			}
		}
	}
	return result;
}
// 14003DDB4: variable 'v22' is possibly undefined
// 14003DDCA: variable 'v23' is possibly undefined
// 1409F73C8: using guessed type wchar_t aUiCursorsPoint_2[21];
// 1409F7428: using guessed type wchar_t aPregamereloadu_0[16];
// 1409F7448: using guessed type wchar_t aUiCursorsHourg_0[25];
// 1409F74D8: using guessed type wchar_t aPregamegetluae_0[20];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C66E38: using guessed type __int64 qword_140C66E38;

