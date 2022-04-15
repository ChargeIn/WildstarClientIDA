//----- (00000001404FEE90) ----------------------------------------------------
_QWORD* __fastcall sub_1404FEE90(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax

	result = *(_QWORD**)(a1 + 7248);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			sub_14002EC40(a1 + 2336, *((_DWORD*)v3 + 8), *((_DWORD*)v3 + 9));
			v4 = v3[3];
			if (v4)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v4 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 7248));
	}
	return result;
}

