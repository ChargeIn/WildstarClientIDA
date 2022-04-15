#include "../winhttp.h"

//----- (00000001400C7BA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400C7BA0(__int64 a1, __int64 a2, char a3)
{
	unsigned __int64 result; // rax
	_QWORD* v7; // rcx
	_QWORD* v8; // rdx
	_QWORD* v9; // rax
	__int64 v10; // rbx
	_QWORD* v11; // rcx
	_QWORD* v12; // rdx
	_QWORD* v13; // rax
	__int64 v14; // rbx

	result = (unsigned __int64)*(unsigned int*)(a2 + 656) >> 18;
	if ((*(_DWORD*)(a2 + 656) & 0x40000i64) == 0)
	{
		result = *(_QWORD*)(a1 + 560);
		v7 = *(_QWORD**)result;
		if (*(_QWORD*)result != result)
		{
			do
			{
				if (v7[2] == a2)
					break;
				v7 = (_QWORD*)*v7;
			} while (v7 != (_QWORD*)result);
		}
		if (v7 != (_QWORD*)result)
		{
			v8 = (_QWORD*)*v7;
			v9 = (_QWORD*)v7[1];
			*v9 = *v7;
			v8[1] = v9;
			sub_14018B900((__int64)v7, 0);
			v10 = *(_QWORD*)(a1 + 560);
			result = (unsigned __int64)sub_14018B280(24i64, 0);
			if (result != -16i64)
				*(_QWORD*)(result + 16) = a2;
			*(_QWORD*)result = v10;
			*(_QWORD*)(result + 8) = *(_QWORD*)(v10 + 8);
			**(_QWORD**)(v10 + 8) = result;
			*(_QWORD*)(v10 + 8) = result;
		}
		if (a3)
		{
			result = *(_QWORD*)(a1 + 576);
			v11 = *(_QWORD**)result;
			if (*(_QWORD*)result != result)
			{
				do
				{
					if (v11[2] == a2)
						break;
					v11 = (_QWORD*)*v11;
				} while (v11 != (_QWORD*)result);
				if (v11 != (_QWORD*)result)
				{
					v12 = (_QWORD*)*v11;
					v13 = (_QWORD*)v11[1];
					*v13 = *v11;
					v12[1] = v13;
					sub_14018B900((__int64)v11, 0);
					v14 = **(_QWORD**)(a1 + 576);
					result = (unsigned __int64)sub_14018B280(24i64, 0);
					if (result != -16i64)
						*(_QWORD*)(result + 16) = a2;
					*(_QWORD*)result = v14;
					*(_QWORD*)(result + 8) = *(_QWORD*)(v14 + 8);
					**(_QWORD**)(v14 + 8) = result;
					*(_QWORD*)(v14 + 8) = result;
				}
			}
		}
	}
	return result;
}

