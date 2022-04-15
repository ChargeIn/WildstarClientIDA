//----- (0000000140630340) ----------------------------------------------------
void __fastcall sub_140630340(__int64 a1)
{
	__int64 v1; // rsi
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rax
	LARGE_INTEGER* QuadPart; // rdi
	unsigned __int64 v6; // rbp
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // [rsp+20h] [rbp-38h]
	__int64 v11; // [rsp+60h] [rbp+8h] BYREF
	__int64 v12; // [rsp+68h] [rbp+10h] BYREF

	v11 = a1;
	v1 = qword_140C65C18;
	v2 = *(_QWORD*)(qword_140C65C18 + 48);
	v3 = *(_QWORD*)(v2 + 16);
	if (v3 != v2)
	{
		do
		{
			v11 = *(_QWORD*)(*(_QWORD*)(v3 + 48) + 24i64);
			if (v11)
			{
				v4 = *(_QWORD*)(v3 + 48);
				QuadPart = *(LARGE_INTEGER**)(v4 + 48);
				for (*(_DWORD*)(v4 + 44) = 0; QuadPart; QuadPart = (LARGE_INTEGER*)QuadPart[15].QuadPart)
				{
					LODWORD(v10) = 6;
					sub_1406A4360((__int64)QuadPart, QuadPart + 1, "Li", QuadPart, v10);
				}
				v12 = v11;
				sub_1403F4740(qword_140C65898, 0x549u, (__int64)&v12);
				v6 = (*(__int64(__fastcall**)(__int64*))(v1 + 24))(&v11);
				v7 = *(_QWORD*)(v1 + 16) + 8 * (v6 % *(_QWORD*)(v1 + 8));
				if (*(_QWORD*)v7)
				{
					while (v6 != **(_QWORD**)v7
						|| !(*(unsigned int(__fastcall**)(__int64*, __int64))(v1 + 32))(&v11, *(_QWORD*)v7 + 16i64))
					{
						v7 = *(_QWORD*)v7 + 8i64;
						if (!*(_QWORD*)v7)
							goto LABEL_11;
					}
					v8 = *(_QWORD*)v7;
					*(_QWORD*)v7 = *(_QWORD*)(*(_QWORD*)v7 + 8i64);
					sub_14018B900(v8, 0);
					--* (_QWORD*)v1;
				}
			}
		LABEL_11:
			v12 = v3;
			sub_140631D50(v1 + 40, &v12);
			v9 = *(_QWORD*)(v1 + 48);
			v3 = *(_QWORD*)(v9 + 16);
		} while (v3 != v9);
	}
	sub_140019490((_QWORD*)v1);
}
// 1406303C9: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65C18: using guessed type __int64 qword_140C65C18;

