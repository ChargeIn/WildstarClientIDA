//----- (0000000140514840) ----------------------------------------------------
void __fastcall sub_140514840(__int64 a1, __int64 a2, int* a3)
{
	_QWORD* v5; // rax
	__int64 v6; // rbx
	__int64 v7; // rax
	_QWORD* v8; // r14
	__int64 v9; // rcx
	int* v10; // rdi
	__int64 v11; // rbx
	unsigned __int64 v12; // rbx
	char* v13; // rbx
	__int64 v14; // rdx
	_DWORD* v15; // rax
	int v16[4]; // [rsp+30h] [rbp-28h] BYREF
	unsigned __int64 v17; // [rsp+60h] [rbp+8h] BYREF
	__int64 v18; // [rsp+78h] [rbp+20h] BYREF

	if (a1)
	{
		v5 = sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"HeaderContentLine",
			0i64,
			a1,
			-2);
		if (v5)
		{
			v6 = (__int64)(v5 + 69);
			v7 = sub_1400D3830((__int64)(v5 + 69), L"Header");
			if (v7)
				(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v7 + 80i64))(v7, a2);
			v8 = (_QWORD*)sub_1400D3830(v6, L"Content");
			if (v8)
			{
				v9 = 0i64;
				v10 = 0i64;
				if (*(_WORD*)a3)
				{
					do
						++v9;
					while (*((_WORD*)a3 + v9));
				}
				v11 = (2 * v9) >> 1;
				if ((unsigned __int64)(v11 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
					v10 = sub_14018B280(2 * (v11 + 1), 0);
				v12 = 2 * v11;
				sub_1407DB590(v10, a3, v12);
				v13 = (char*)v10 + v12;
				if (v13)
					*(_WORD*)v13 = 0;
				v14 = v8[87];
				v18 = 0i64;
				(*(void(__fastcall**)(__int64, _QWORD, int*, __int64, __int64*))(*(_QWORD*)qword_140C65680 + 40i64))(
					qword_140C65680,
					*(_QWORD*)(v14 + 96),
					a3,
					-1i64,
					&v18);
				v17 = 0i64;
				v15 = sub_1400CB3D0((__int64)v8, v16);
				(*(void(__fastcall**)(__int64, _DWORD*, unsigned __int64*))(*(_QWORD*)v18 + 176i64))(v18, v15, &v17);
				if (v17 < (v13 - (char*)v10) >> 1 && v17 >= 2)
				{
					*((_WORD*)v10 + v17) = 46;
					*((_WORD*)v10 + v17 - 1) = 46;
					*((_WORD*)v10 + v17 - 2) = 46;
					*((_WORD*)v10 + v17 + 1) = 0;
				}
				if (v18)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
					v18 = 0i64;
				}
				(*(void(__fastcall**)(_QWORD*, int*))(*v8 + 80i64))(v8, v10);
				if (v10)
					sub_14018B900((__int64)v10, 0);
			}
		}
	}
}
// 140B12490: using guessed type wchar_t aContent[8];
// 140B124E8: using guessed type wchar_t aHeadercontentl[18];
// 140B12520: using guessed type wchar_t aHeader_0[7];
// 140B12530: using guessed type wchar_t aUiActionconfir_0[27];
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140514840: using guessed type int var_28[4];

