//----- (00000001403794D0) ----------------------------------------------------
__int64 __fastcall sub_1403794D0(__int64 a1, __int64 a2)
{
	__int64 result; // rax
	_QWORD* v5; // rbx
	_QWORD* v6; // rcx
	__int64 v7; // rcx

	if (*(_DWORD*)(a1 + 76))
		return 1i64;
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 40i64))(*(_QWORD*)(a1 + 48));
	if ((_DWORD)result)
	{
		v5 = *(_QWORD**)(a1 + 64);
		if (v5)
		{
			while ((*(unsigned int(__fastcall**)(_QWORD*, __int64))(*v5 + 32i64))(v5, a2))
			{
				v5 = (_QWORD*)v5[151];
				if (!v5)
					goto LABEL_7;
			}
			return 0i64;
		}
		else
		{
		LABEL_7:
			sub_140377580(a1);
			sub_140377640((__m128*)a1);
			*(_DWORD*)(a1 + 76) = 1;
			sub_1403788A0((__m128*)a1);
			if (*(_QWORD*)(a1 + 1296))
			{
				if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 288i64))(a1))
					sub_140367870(*(_QWORD*)(a1 + 16), (float*)(a1 + 752));
				v6 = *(_QWORD**)(a1 + 1296);
				if (v6)
					*v6 = *(_QWORD*)(a1 + 1304);
				v7 = *(_QWORD*)(a1 + 1304);
				if (v7)
					*(_QWORD*)(v7 + 1296) = *(_QWORD*)(a1 + 1296);
				*(_QWORD*)(a1 + 1296) = 0i64;
				*(_QWORD*)(a1 + 1304) = 0i64;
			}
			return 1i64;
		}
	}
	return result;
}

