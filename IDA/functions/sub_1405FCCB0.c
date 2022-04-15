//----- (00000001405FCCB0) ----------------------------------------------------
_QWORD* __fastcall sub_1405FCCB0(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	__int64 v4; // rax
	__int64 v5; // rax

	result = *(_QWORD**)(a1 + 72);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = sub_1405A8A40(a1, *((_DWORD*)v3 + 8));
			if ((*(_BYTE*)(*(_QWORD*)(v4 + 8) + 12i64) & 4) == 0 || (unsigned int)sub_140552550(v4, -513))
				sub_1405FCA00(a1, *((_DWORD*)v3 + 8), 0);
			v5 = v3[3];
			if (v5)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v5 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 72));
	}
	return result;
}
// 1405FCCD3: variable 'a1' is possibly undefined

