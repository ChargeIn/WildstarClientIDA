//----- (00000001403914B0) ----------------------------------------------------
_QWORD* __fastcall sub_1403914B0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
	_QWORD* result; // rax
	__int64 v8; // r14
	_QWORD* v9; // rbp
	__int64 v10; // r14
	__int64 v11; // rbx
	__int64 v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // rdi
	__int64 v15; // rax

	result = (_QWORD*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 16) + 128i64))(*(_QWORD*)(a1 + 16));
	v8 = *(_QWORD*)(a1 + 24);
	v9 = result;
	if (v8)
	{
		v10 = v8 + 64;
	}
	else
	{
		result = *(_QWORD**)(a1 + 8);
		v10 = result[2] + 3504i64;
	}
	if (v9)
	{
		v11 = 0i64;
		do
		{
			v12 = *(_QWORD*)(a1 + 160);
			if (*(_QWORD*)(v11 + v12 + 8) == a1)
			{
				result = *(_QWORD**)(v11 + v12 + 16);
			}
			else
			{
				result = 0i64;
				if (*(_QWORD*)(v11 + v12 + 16) == a1)
					result = *(_QWORD**)(v11 + v12 + 8);
			}
			v13 = result[3];
			if (v13)
			{
				v14 = v13 + 64;
			}
			else
			{
				result = (_QWORD*)result[1];
				v14 = result[2] + 3504i64;
			}
			if (v10 != v14)
			{
				v15 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v11 + v12) + 56i64))(*(_QWORD*)(v11 + v12));
				result = (_QWORD*)(*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, __int64))(*(_QWORD*)qword_140C65688 + 136i64))(
					qword_140C65688,
					v15,
					v10,
					v14,
					a2,
					128,
					a4);
			}
			v11 += 24i64;
			v9 = (_QWORD*)((char*)v9 - 1);
		} while (v9);
	}
	return result;
}
// 140C65688: using guessed type __int64 qword_140C65688;

