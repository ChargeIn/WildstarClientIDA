#include "../winhttp.h"

//----- (000000014040CE50) ----------------------------------------------------
__int64 __fastcall sub_14040CE50(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned int v7; // edi
	unsigned int* i; // rsi
	unsigned int v9; // ebx
	__int64 v10; // rbx
	int v11; // ecx
	__int64 v12; // rcx
	int v13; // edx

	result = sub_14020B060(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 372i64));
	if (result)
	{
		v7 = 0;
		for (i = (unsigned int*)(result + 64); ; ++i)
		{
			result = *(unsigned __int8*)(a2 + 292);
			if (v7 >= (unsigned int)result)
				return result;
			result = (__int64)qword_140C63840;
			v9 = *i;
			if (qword_140C63840)
				break;
			if (!dword_140C6480C)
			{
				result = sub_14020B240();
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C644D8 + 24i64))(
						qword_140C644D8,
						v9);
				LABEL_9:
					v10 = result;
					if (result)
					{
						v11 = *(_DWORD*)(result + 4);
						if (v11)
						{
							if (v11 == 1)
							{
								result = sub_14040FA40(a3, *(_DWORD*)(result + 8));
								if (result)
									result = sub_14040C070((_DWORD*)(a2 + 148), (_DWORD*)result);
							}
						}
						else
						{
							result = sub_1402479C0(*(_DWORD*)(result + 8));
							if (result)
							{
								if ((*(_BYTE*)(result + 36) & 4) != 0)
								{
									v13 = *(_DWORD*)(result + 52);
									if (!v13 || (v12 = *(_QWORD*)(a1 + 16), (v13 & *(_DWORD*)(v12 + 384)) != 0))
										result = sub_14040E610(
											v12,
											a2,
											*(_DWORD*)(v10 + 8),
											(float)(*(float*)(result + 32) * *(float*)(a2 + 24)) * *(float*)(v10 + 16));
								}
							}
						}
					}
				}
			}
			if (++v7 >= 0xF)
				return result;
		}
		result = qword_140C63840(off_140A6AD38, v9, qword_140C63858);
		goto LABEL_9;
	}
	return result;
}
// 14040CF5A: variable 'v12' is possibly undefined
// 140A6AD38: using guessed type wchar_t *off_140A6AD38[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C644D8: using guessed type __int64 qword_140C644D8;
// 140C6480C: using guessed type int dword_140C6480C;

