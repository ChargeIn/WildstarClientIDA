//----- (0000000140152160) ----------------------------------------------------
_QWORD* __fastcall sub_140152160(__int64 a1)
{
	_QWORD* result; // rax
	_QWORD* v3; // rbx
	void(__fastcall * **v4)(_QWORD, __int64); // rcx
	__int64 v5; // rax

	result = *(_QWORD**)(a1 + 24);
	v3 = (_QWORD*)result[2];
	if (v3 != result)
	{
		do
		{
			v4 = (void(__fastcall***)(_QWORD, __int64))v3[8];
			if (v4)
				(**v4)(v4, 1i64);
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
		} while (v3 != *(_QWORD**)(a1 + 24));
	}
	if (*(_QWORD*)(a1 + 32))
	{
		sub_140044CA0(a1 + 16, *(_QWORD**)(*(_QWORD*)(a1 + 24) + 8i64));
		*(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64) = *(_QWORD*)(a1 + 24);
		*(_QWORD*)(*(_QWORD*)(a1 + 24) + 8i64) = 0i64;
		result = *(_QWORD**)(a1 + 24);
		result[3] = result;
		*(_QWORD*)(a1 + 32) = 0i64;
	}
	return result;
}

