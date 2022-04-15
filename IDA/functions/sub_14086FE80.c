//----- (000000014086FE80) ----------------------------------------------------
__int64 __fastcall sub_14086FE80(__int64 a1, float a2, __int64 a3, __int64* a4, char a5)
{
	__int64 v5; // rbx
	bool v6; // si
	__int64 i; // rbx
	__int64 result; // rax

	v5 = *(_QWORD*)(a1 + 56);
	v6 = a3 == 0;
	if (v5)
	{
		for (i = *(_QWORD*)(v5 + 24); i; i = *(_QWORD*)(i + 32))
		{
			if (v6 || *(_QWORD*)(i + 176) == a3)
				result = sub_14085F320(i, a2, a4, a5);
		}
	}
	return result;
}

