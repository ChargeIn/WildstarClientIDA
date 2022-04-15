//----- (000000014088B6D0) ----------------------------------------------------
void __fastcall sub_14088B6D0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	bool v6; // zf
	__int64 v7; // rcx

	v3 = *(_QWORD*)(a1 + 48);
	v4 = 0i64;
	v5 = v3;
	if (v3)
	{
		while (v5 != a2)
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 8);
			if (!v5)
				return;
		}
		if (v5)
		{
			v6 = v5 == v3;
			v7 = *(_QWORD*)(v5 + 8);
			if (v6)
				*(_QWORD*)(a1 + 48) = v7;
			else
				*(_QWORD*)(v4 + 8) = v7;
			sub_14088B630(a1);
		}
	}
}

