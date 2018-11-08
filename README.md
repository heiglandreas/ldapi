# LDAPI

A new object-oriented ldap-extension for PHP

The idea is to convert the current (buggy) ldap-extension into an objecct-oriented version and to get rid of the resources. At least in userland

Based on ideas developed on ZendCon 2016 by auroraeosrose and heiglandreas

## Interface

```php
<?php

namespace Ldapi

class Ldap 
{
    public function __construct(URI $uri);
    
    public function bind([DN $dn, string $password]) : bool;
    
    public function unbind() : bool;
    
    public function search(Search $searchparameters) : EntryList;
    
    public function add(EntryList $entriesToBeAdded);
    
    public function remove(DnList $entriesToBeRemoved);
    
    public function modify(EntryList $entriesToBeModified);
    
    public function setOption(string $key, Option $option) : void;
    
    public function getOption(string $key) : Option;
}

class Dn
{
    public function __construct(string $dn);
}

class DnList implements Iterator;
{
    public function add(Dn $dnToBeAdded) : void;
}

class Search
{
    public function __construct(Dn $baseDn, string $filter, array $attributes);
}

class EntryList implements Iterable
{
    public function add(Entry $entryToBeAdded) : void
    
    public function remove(Entry $entryToBeREmoved) : void
    
    public function sort(callable $sortingFunction) : EntryList
}

class Entry
{
    public function __construct(Dn $dn);
    
    public function setAttribute(Attribute $attribute) : void;
    
    public function getAttribute(string $attribute) : Attribute;
    
    public function removeAttribute(string $attribute) : void;
    
    public function setAttributes(AttributeList $attributes) : void;
    
    public function getAttributes() : AttributeList;
}

class Attribute implements Iterable
{
    public function __construct(string $attributeName);

    public function getName)( : string;
    
    public function addValue(Value $value) : void;
    
    public function removeValue(Value $value) : void;
    
    public function setValues(ValueList $values) : void;
    
    public function getValues() : ValueList;
}

class Value 
{
    public function __construct($value);
    
    public function getValue)( mixed;
}

class ValueList implements Iterable
{
    public function add(Value $value) : void;
    
    public function remove(Value $value) : void;
}
    
class AttributeList implements Iterable
{
    public function add(Attribute $attribute) : void;
}

class Option
{
    public function __construct(string $name, $value);
    
    public function getName() : string;
    
    public function getValue() : mixed;
}
```

## Basic usage:

```php

$ldap = new Ldapi\Ldap('ldap-tls://ldap.example.com:369');

if (! $ldap->bind()) {
    die ('bind didn't work');
}

$result = $ldap->search(new Ldapi\Search(
                             new Dn('dc=example,dc=com'),
                             'uid=foo',
                             ['uid', 'cn']
                         ));
                         
if ($result->count() <= 0) {
    die ('something went south');
}

foreach ($result as $entry) {
    echo (string) $entry->getDn();
    foreach ($entry->getAttributes() as $attribute) [
        echo $attribute->getName();
        foreach ($attribute->getValues() as $value) {
            echo $value->getValue();
        }
    }
}
```