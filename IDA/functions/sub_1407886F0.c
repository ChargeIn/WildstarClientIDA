//----- (00000001407886F0) ----------------------------------------------------
__int64 __fastcall sub_1407886F0(__int64 a1, int a2, __int64 a3)
{
	__int64 result; // rax
	_QWORD* v6; // rbx
	__int64 v8; // rdi

	result = *(_QWORD*)(a1 + 40);
	v6 = *(_QWORD**)result;
	if (*(_QWORD*)result != result)
	{
		do
		{
			if (!a2)
				goto LABEL_6;
			result = *(unsigned int*)(*(_QWORD*)(v6[3] + 8i64) + 420i64);
			if (!(_DWORD)result)
				result = 1i64;
			if ((_DWORD)result == a2)
			{
			LABEL_6:
				v8 = *(_QWORD*)(a3 + 8);
				result = (__int64)sub_14018B280(40i64, 0);
				if (result != -16)
				{
					*(_QWORD*)(result + 16) = v6[2];
					*(_QWORD*)(result + 24) = v6[3];
					*(_QWORD*)(result + 32) = v6[4];
				}
				*(_QWORD*)result = v8;
				*(_QWORD*)(result + 8) = *(_QWORD*)(v8 + 8);
				**(_QWORD**)(v8 + 8) = result;
				*(_QWORD*)(v8 + 8) = result;
			}
			v6 = (_QWORD*)*v6;
		} while (v6 != *(_QWORD**)(a1 + 40));
	}
	return result;
}

