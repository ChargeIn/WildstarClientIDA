//----- (00000001408582F0) ----------------------------------------------------
__int64 __fastcall sub_1408582F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v5; // rbx
	_QWORD* i; // rbx
	__int64 result; // rax
	__int64 v8; // rbx
	int v9; // ebp
	_QWORD* j; // rbx

	if ((*(_BYTE*)(a3 + 44) & 1) != 0)
	{
		v5 = *(_QWORD*)(a1 + 56);
		if (v5)
		{
			for (i = *(_QWORD**)(v5 + 24); i; i = (_QWORD*)i[4])
			{
				if (!a2 || i[22] == a2)
					result = (*(__int64(__fastcall**)(_QWORD*, __int64, bool))(*i + 72i64))(
						i,
						a2,
						(*(_BYTE*)(a3 + 44) & 2) != 0);
			}
		}
	}
	else
	{
		v8 = *(_QWORD*)(a1 + 56);
		result = 0i64;
		v9 = *(_DWORD*)(a3 + 40);
		if (v9 < 0)
			v9 = 0;
		if (v8)
		{
			for (j = *(_QWORD**)(v8 + 24); j; j = (_QWORD*)j[4])
			{
				if (!a2 || j[22] == a2)
					result = (*(__int64(__fastcall**)(_QWORD*, _QWORD, bool))(*j + 64i64))(
						j,
						(unsigned int)v9,
						(*(_BYTE*)(a3 + 44) & 2) != 0);
			}
		}
	}
	return result;
}
// 140858373: variable 'a2' is possibly undefined

