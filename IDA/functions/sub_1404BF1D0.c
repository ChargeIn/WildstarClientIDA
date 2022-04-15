//----- (00000001404BF1D0) ----------------------------------------------------
__int64 __fastcall sub_1404BF1D0(_QWORD* a1, unsigned int a2)
{
	unsigned __int64 v2; // rdi
	__int64 v5; // r9
	__int64 v6; // r8
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64* v10; // rax
	__int64 v11; // rax
	__int64 v13; // [rsp+30h] [rbp+8h] BYREF
	__int64 v14; // [rsp+40h] [rbp+18h] BYREF

	v2 = 1i64;
	if (a1[39] > 1ui64)
	{
		v5 = qword_140C659F8;
		do
		{
			v6 = *(_QWORD*)(a1[38] + 8 * v2);
			if (!a2)
				goto LABEL_15;
			v7 = *(_QWORD*)(v5 + 232);
			v8 = v7;
			v9 = *(_QWORD*)(v7 + 8);
			while (v9)
			{
				if (*(_DWORD*)(v9 + 32) < a2)
				{
					v9 = *(_QWORD*)(v9 + 24);
				}
				else
				{
					v8 = v9;
					v9 = *(_QWORD*)(v9 + 16);
				}
			}
			if (v8 == v7 || a2 < *(_DWORD*)(v8 + 32))
			{
				v14 = *(_QWORD*)(v5 + 232);
				v10 = &v14;
			}
			else
			{
				v13 = v8;
				v10 = &v13;
			}
			v11 = *v10;
			if (v11 != v7)
			{
				if (*(_QWORD*)(v11 + 40))
				{
				LABEL_15:
					*(_DWORD*)(v6 + 672) = a2;
					*(_DWORD*)(v6 + 248) = a2;
					sub_1404C6B10(v6);
					v5 = qword_140C659F8;
				}
			}
			++v2;
		} while (v2 < a1[39]);
	}
	return (*(__int64(__fastcall**)(_QWORD*))(*a1 + 160i64))(a1);
}
// 140C659F8: using guessed type __int64 qword_140C659F8;

