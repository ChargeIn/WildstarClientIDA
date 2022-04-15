//----- (00000001403916D0) ----------------------------------------------------
__int64 __fastcall sub_1403916D0(__int64 a1)
{
	__int64 v1; // rbp
	__int64 v3; // rbp
	__int64 result; // rax
	__int64 v5; // rsi
	__int64 v6; // rdi
	__int64 v7; // rcx
	__int64 v8; // rax

	v1 = *(_QWORD*)(a1 + 24);
	if (v1)
		v3 = v1 + 64;
	else
		v3 = *(_QWORD*)(*(_QWORD*)(a1 + 8) + 16i64) + 3504i64;
	result = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	v5 = result;
	if (result)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(a1 + 160);
			if (*(_QWORD*)(v6 + v7 + 8) == a1)
			{
				result = *(_QWORD*)(v6 + v7 + 16);
			}
			else
			{
				result = 0i64;
				if (*(_QWORD*)(v6 + v7 + 16) == a1)
					result = *(_QWORD*)(v6 + v7 + 8);
			}
			if (*(_QWORD*)(result + 320))
			{
				v8 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v6 + v7) + 56i64))(*(_QWORD*)(v6 + v7));
				result = (*(__int64(__fastcall**)(__int64, __int64, __int64))(*(_QWORD*)qword_140C65688 + 160i64))(
					qword_140C65688,
					v8,
					v3);
			}
			v6 += 24i64;
			--v5;
		} while (v5);
	}
	return result;
}
// 140C65688: using guessed type __int64 qword_140C65688;

