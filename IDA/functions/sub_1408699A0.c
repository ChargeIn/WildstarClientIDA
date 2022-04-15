//----- (00000001408699A0) ----------------------------------------------------
__int64 __fastcall sub_1408699A0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	_QWORD* v4; // rbx
	__int64 result; // rax

	v4 = *(_QWORD**)(a1 + 168);
	if (v4 == *(_QWORD**)(a1 + 176))
		return 1i64;
	do
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD*)*v4 + 152i64))(*v4, a2, a3, a4);
		if ((_DWORD)result != 1)
			break;
		++v4;
	} while (v4 != *(_QWORD**)(a1 + 176));
	return result;
}

