//----- (0000000140553410) ----------------------------------------------------
_QWORD* __fastcall sub_140553410(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	_QWORD* v4; // rax
	__int64 v5; // rcx
	__int64 v6; // rax

	result = *(_QWORD**)(a1 + 96);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = (_QWORD*)sub_1407242B0(a1, *((_DWORD*)v3 + 8));
			sub_140724340(v5, v4);
			v6 = v3[3];
			if (v6)
			{
				v3 = (_QWORD*)v3[3];
				for (result = *(_QWORD**)(v6 + 16); result; result = (_QWORD*)result[2])
					v3 = result;
			}
			else
			{
				for (result = (_QWORD*)v3[1]; v3 == (_QWORD*)result[3]; result = (_QWORD*)result[1])
					v3 = result;
				if ((_QWORD*)v3[3] != result)
					v3 = result;
			}
		} while (v3 != *(_QWORD**)(a1 + 96));
	}
	return result;
}
// 140553433: variable 'a1' is possibly undefined
// 14055343B: variable 'v5' is possibly undefined

